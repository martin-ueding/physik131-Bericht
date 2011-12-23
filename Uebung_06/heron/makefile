# Copyright (c) 2011 Martin Ueding <dev@martin-ueding.de>

include ../../makefile.common

all: heron.2.out heron.4.out heron.10.out

heron.2.out: heron
	./$^ 2 > $@

heron.4.out: heron
	./$^ 4 > $@

heron.10.out: heron
	./$^ 10 > $@

heron: heron.cpp

clean:
	$(RM) heron
	$(RM) heron.out
