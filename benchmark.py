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
CONFIGS = ['control', 'experiment']
logfiles = {}
for test in TESTS:
    for config in CONFIGS:
        logfiles[(test, config)] = []

for g in glob("log-*.txt"):
    m = re.match('log-(.+)-(.+)-([0-9]+).txt', g)
    test, config, index = m.groups()
    index = int(index)
    logfiles[(test, config)].append( (index, g) )

for test in TESTS:
    for config in CONFIGS:
        logfiles[(test, config)] = [path
                                    for index, path in sorted(logfiles[(test, config)])]

class Options:
    def __init__(self, benchmark_name):
        self.benchmark_name = benchmark_name
        self.disable_timelines = False
        self.control_label = 'control'
        self.experiment_label = 'experiment'

logs = {}
for test in TESTS:
    for config in CONFIGS:
        logs[(test, config)] = []
        for logfile in logfiles[(test, config)]:
            log = GccLog(logfile)
            logs[(test, config)].append(log)

for test in TESTS:
    for stat_field in STAT_FIELDS:
        benchmark_name = '%s -O3: %s' % (test, stat_field)
        data = {}
        for config in CONFIGS:
            data[config] = [getattr(log.stats, stat_field)
                            for log in logs[(test, config)]]
        print(benchmark_name)
        for config in CONFIGS:
            print('   %10s: %s' % (config, data[config]))
        if stat_field == 'ggc':
            print(perf.CompareMemoryUsage(data['control'],
                                          data['experiment'],
                                          Options(benchmark_name)))
        else:
            print(perf.CompareMultipleRuns(data['control'],
                                           data['experiment'],
                                           Options(benchmark_name)))
        print('')
