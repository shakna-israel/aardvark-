PREFIX = /usr/local

.PHONY: install
install:
	mkdir $(PREFIX)/aardvark
	cp aardvark $(PREFIX)/aardvark/aardvark
	cp .help $(PREFIX)/aardvark/.help
	cp .main $(PREFIX)/aardvark/.main
	cp .model-tools $(PREFIX)/aardvark/.model-tools
	cp .models $(PREFIX)/aardvark/.models
	cp .tools $(PREFIX)/aardvark/.tools
	cp .header $(PREFIX)/aardvark/.header
	cp LICENSE.md $(PREFIX)/aardvark/LICENSE.md
	cp Makefile $(PREFIX)/aardvark/Makefile
	ln -s $(PREFIX)/aardvark/aardvark $(PREFIX)/bin/aardvark

.PHONY: uninstall
uninstall:
	rm -rf $(PREFIX)/aardvark
	rm $(PREFIX)/bin/aardvark
