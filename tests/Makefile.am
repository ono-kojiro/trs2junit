TRS2JUNIT = ../trs2junit
TEST_WRAPPER = ../test_wrapper
LOG_DRIVER := $(SHELL) $(TEST_WRAPPER) $(top_srcdir)/config/test-driver

TESTS = \
    test_simple \
    01-simple.sh \
    02-long.sh \
    03-error.sh

noinst_PROGRAMS = test_simple test_example

test_simple_SOURCES = test_simple.c

test_example_SOURCES = test_example.c


report:
	$(TRS2JUNIT) -o junit_report.xml *.trs

test :
	-$(MAKE) check
	$(MAKE) report

.PHONY : \
    report test

