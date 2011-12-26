# Copyright (c) 2011 Martin Ueding <dev@martin-ueding.de>

all: kugel.pdf histogram.pdf

kugel.pdf: kugel.C

histogram.pdf: bericht.C

%.pdf: %.C
	root -b -q $^

clean:
	$(RM) histogram.pdf
