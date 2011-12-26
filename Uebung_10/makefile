# Copyright (c) 2011 Martin Ueding <dev@martin-ueding.de>

all: kugel.pdf histogram.pdf

kugel.pdf: kugel.C
	root -b -q $^

histogram.pdf: bericht.C
	root -b -q $^

clean:
	$(RM) histogram.pdf
	$(RM) kugel.pdf
