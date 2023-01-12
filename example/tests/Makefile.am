LOG_DRIVER := $(SHELL) test_wrapper $(top_srcdir)/config/test-driver

TESTS = 01-simple.sh 02-long.sh 03-error.sh

report:
	trs2junit -o junit_report.xml *.trs

test :
	-$(MAKE) check
	$(MAKE) report

.PHONY : \
	report test

