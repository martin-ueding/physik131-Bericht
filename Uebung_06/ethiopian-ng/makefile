include ../../makefile.common

ethiopian.short.out: ethiopian.out
	head -n 15 $< > $@

ethiopian.out: ethiopian
	./$^ > $@

ethiopian: ethiopian.cpp
