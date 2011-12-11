# Copyright (c) 2011 Martin Ueding <dev@martin-ueding.de>

include ../../makefile.common

out.dat: bericht
	./bericht > $@

bericht: bericht.cpp

clean:
	$(RM) bericht
	$(RM) means.dat
	$(RM) out.dat
