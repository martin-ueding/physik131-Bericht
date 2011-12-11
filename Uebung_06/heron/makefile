# Copyright (c) 2011 Martin Ueding <dev@martin-ueding.de>

include ../../makefile.common

heron.out: heron
	./$^ 2 > $@

heron: heron.cpp

clean:
	$(RM) heron
	$(RM) heron.out
