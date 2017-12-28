.PHONY: unity test src clean all
PROJECT=roman-to-arabic

all: src

unity:
	$(MAKE) -C unity

test: unity
	$(MAKE) -C test

src: test
	$(MAKE) -C src

clean:
	$(MAKE) -C test clean
	$(MAKE) -C src clean
	$(MAKE) -C unity clean