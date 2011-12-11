# Copyright (c) 2011 Martin Ueding <dev@martin-ueding.de>

include ../../makefile.common

swap.out: swap
	./swap > swap.out

swap: swap.cpp

.PHONY: clean
clean:
	$(RM) *.class *.jar
	$(RM) *.o *.out
	$(RM) *.pyc
	$(RM) *.orig
