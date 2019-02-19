#!/usr/bin/env python
#
# run-tests.py hacked to run only the CASE tests.
# See array CASE_TESTS below.
#
# This should be installed in camkes/test/
#
# Original Copyright 2017, Data61
# Commonwealth Scientific and Industrial Research Organisation (CSIRO)
# ABN 41 687 119 230.
#
# This software may be distributed and modified according to the terms of
# the BSD 2-Clause license. Note that NO WARRANTY is provided.
# See "LICENSE_BSD2.txt" for details.
#
# @TAG(DATA61_BSD)
#

import argparse, multiprocessing, os, stat, subprocess, sys

MY_DIR = os.path.abspath(os.path.dirname(__file__))

CASE_TESTS = ['testdpmon','testevent','testshare']

def main(argv):
    parser = argparse.ArgumentParser(
        description='run CASE connection tests')
    parser.add_argument('--jobs', '-j', type=int,
        default=multiprocessing.cpu_count(), help='number of parallel jobs')
    parser.add_argument('--verbose', '-v', action='store_true',
        help='be verbose with output')
    parser.add_argument('--project-dir', dest='project_dir', default=os.getcwd())
    parser.add_argument('--cmake', dest='cmake', action='store_true',
            help='This option is deprecated and unused.')
    opts = parser.parse_args(argv[1:])

    result = 0

    pipes = {}
    if not opts.verbose:
        pipes['stdout'] = pipes['stderr'] = subprocess.PIPE

    for app in CASE_TESTS:
        for t in sorted(os.listdir(os.path.join(opts.project_dir, 'apps', app))):
            path = os.path.join(opts.project_dir, 'apps', app, t)
            mode = os.stat(path).st_mode
            if t != os.path.basename(__file__) and t.endswith(".tcl"):
                sys.stdout.write(' Running %s ... ' % t)
                sys.stdout.flush()
                my_env = os.environ.copy()
                my_env["SCRIPT_DIR"] = MY_DIR
                p = subprocess.Popen([path, str(opts.jobs)], env=my_env,
                    cwd=os.path.join(MY_DIR, '../../..'), **pipes)
                stdout, stderr = p.communicate()
                if p.returncode == 0:
                    sys.stdout.write('\033[32mPassed\033[0m\n')
                else:
                    result = p.returncode
                    sys.stdout.write('\033[31mFailed\033[0m\n')
                    if not opts.verbose:
                        sys.stdout.write(' -- stdout %s --\n%s' % (t, stdout))
                        sys.stderr.write(' -- stderr %s --\n%s' % (t, stderr))
                    sys.stdout.flush()
                    sys.stderr.flush()

    return result

if __name__ == '__main__':
    try:
        sys.exit(main(sys.argv))
    except KeyboardInterrupt:
        sys.exit(130)
