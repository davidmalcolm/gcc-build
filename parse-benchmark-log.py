from collections import Counter
import gzip
import os
from pprint import pprint
import re
import sys

from gccinvocation import GccInvocation

GCC_PROGRAMS=['cc', 'gcc',
              'x86_64-redhat-linux-gcc', # FIXME
              # libexec:
              'cc1', 'cc1plus', 'collect2', 'f951',
              'gnat1', 'jc1', 'lto1']
# also: 'ecj1', 'jvgenmain'

PATTERN = r'utime\(ms\): ([0-9]+) lifetime\(ns\): ([0-9]+) cmdline: (.+)'
pattern = re.compile(PATTERN)

class BuildLog:
    def __init__(self, path):
        self.stats = {}
        self.utimes = Counter()
        self.lifetimes = Counter()
        if path.endswith('.gz'):
            opener = gzip.open
        else:
            opener = open
        self.error_count = 0
        with opener(path) as f:
            for linenum, line in enumerate(f):
                m = pattern.match(line)
                if m:
                    utime, lifetime, cmdline = m.groups()
                    utime = int(utime)
                    lifetime = int(lifetime)
                    #print(cmdline)

                    progname = os.path.basename(cmdline.split()[0])
                    if progname not in GCC_PROGRAMS:
                        # Skip commands that GccInvocation can't parse:
                        continue

                    gccinv = GccInvocation.from_cmdline(cmdline)
                    #print(gccinv)
                    #print(gccinv.executable)
                    #print(gccinv.progname)
                    if gccinv.progname in GCC_PROGRAMS:
                        # Don't try to handle collect2 yet:
                        if gccinv.progname == 'collect2':
                            continue

                        # Ensure that we're reliably extracting the name of the
                        # source file from the log:
                        if not gccinv.sources:
                            if '-print-file-name=include' in gccinv.otherargs:
                                continue

                        if len(gccinv.sources) != 1:
                            # Skip linkage invocations of gcc:
                            if all(src.endswith('.o')
                                   for src in gccinv.sources):
                                continue
                            sys.stderr.write('%s:%i: more that one source: sources: %r in %r  line: %r\n'
                                             % (path, linenum + 1,
                                                gccinv.sources, gccinv, line))
                            self.error_count += 1

                        srcfile = gccinv.sources[0]
                        self.stats[(gccinv.progname, srcfile)] = (utime, lifetime)
                        if gccinv.progname == 'cc1':
                            self.utimes[srcfile] = utime
                            self.lifetimes[srcfile] = lifetime

def write_stats(path, counter, comment):
    with open(path, 'w') as f:
        f.write('# %s\n' % comment)
        for srcfile, amount in counter.most_common():
            f.write('%s %s\n' % (srcfile, amount))

dir_ = sys.argv[1]
bl = BuildLog(os.path.join(dir_, 'benchmark.log'))
write_stats(os.path.join(dir_, 'source-file-by-cc1-user-time.txt'),
            bl.utimes,
            'usertime spent in cc1 (in ms) per source-file')
write_stats(os.path.join(dir_, 'source-file-by-cc1-wallclock-lifetime.txt'),
            bl.lifetimes,
            'wallclock lifetime of cc1 (in ns) per source-file')

sys.exit(bl.error_count)

# TODO:
#   * coerce into bootchart format
#   * top 10 longest files?
#   * locate a particular source file
