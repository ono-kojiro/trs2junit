ACLOCAL_AMFLAGS = -I config

bin_SCRIPTS = test_wrapper trs2junit junit2jsonl

EXTRA_DIST = test_wrapper trs2junit.py debian ChangeLog

trs2junit : trs2junit.py
	cp -f $< $@

SUBDIRS = tests

test :
	$(MAKE) -C tests test

dpkg :
	sh mkdebpkg.sh ctrl --package $(PACKAGE_NAME) --version $(PACKAGE_VERSION)
	$(MAKE) dist
	cp -f $(PACKAGE_NAME)-$(PACKAGE_VERSION).tar.gz \
        $(PACKAGE_NAME)_$(PACKAGE_VERSION).tar.gz
	sh mkdebpkg.sh dsc  --package $(PACKAGE_NAME) --version $(PACKAGE_VERSION)

	rm -rf ./debbuild
	echo "extract source ..."
	dpkg-source -x $(PACKAGE_NAME)_$(PACKAGE_VERSION).dsc ./debbuild
	echo "build package ..."
	cd debbuild && \
	    dpkg-buildpackage -rfakeroot -b -us -uc

