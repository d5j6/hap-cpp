all:
	@$(MAKE) -C src all

debug:
	@$(MAKE) -C src debug

install: all

test:
	@$(MAKE) -C src debug
	@$(MAKE) -C tests test

docs:
	@$(MAKE) -C src docs

clean:
	@$(MAKE) -C src clean
	@$(MAKE) -C tests clean

.PHONY: all debug install test docs clean
