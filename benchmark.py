from collections import namedtuple
from glob import glob
from pprint import pprint
import re

import perf

STAT_FIELDS = ('usr', 'sys', 'wall', 'ggc')
class Stats(namedtuple('Stats', STAT_FIELDS)):
    pass

class GccLog:
    def __init__(self, path):
        with open(path) as f:
            for line in f:
                ws = r'\s+'
                timing = r'([0-9]+.[0-9]+)'
                m = re.match(r'^ TOTAL' + ws + ':' + 3 * (ws + timing) + ws + r'([0-9]+) kB$', line)
                if m:
                    self.stats = Stats(*[float(f) for f in m.groups()])

TESTS = ['kdecore.cc', 'big-code.c']
GROUPS = ['control', 'experiment']
CONFIGS = ['x86_64-unknown-linux-gnu']
logfiles = {}
for test in TESTS:
    for group in GROUPS:
        for config in CONFIGS:
            logfiles[(test, group, config)] = []

for g in glob("test/*/*/log-*.txt"):
    m = re.match('test/(.+)/(.+)/log-(.+)-([0-9]+).txt', g)
    group, config, test, index = m.groups()
    index = int(index)
    logfiles[(test, group, config)].append( (index, g) )

for test in TESTS:
    for group in GROUPS:
        logfiles[(test, group, config)] = [path
                                           for index, path in sorted(logfiles[(test, group, config)])]

class Options:
    def __init__(self, benchmark_name):
        self.benchmark_name = benchmark_name
        self.disable_timelines = False
        self.control_label = 'control'
        self.experiment_label = 'experiment'

logs = {}
for test in TESTS:
    for group in GROUPS:
        for config in CONFIGS:
            logs[(test, group, config)] = []
            for logfile in logfiles[(test, group, config)]:
                log = GccLog(logfile)
                logs[(test, group, config)].append(log)

for test in TESTS:
    for config in CONFIGS:
        for stat_field in STAT_FIELDS:
            benchmark_name = 'Compilation of %s at -O3 for %s: %s' % (test, config, stat_field)
            data = {}
            for group in GROUPS:
                data[group] = [getattr(log.stats, stat_field)
                                for log in logs[(test, group, config)]]
            print(benchmark_name)
            for group in GROUPS:
                print('   %10s: %s' % (group, data[group]))
            if stat_field == 'ggc':
                print(perf.CompareMemoryUsage(data['control'],
                                              data['experiment'],
                                              Options(benchmark_name)))
            else:
                print(perf.CompareMultipleRuns(data['control'],
                                               data['experiment'],
                                               Options(benchmark_name)))
            print('')
