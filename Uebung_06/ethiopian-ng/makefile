CXX=g++
CFLAGS=-Wall --pedantic

ethiopian.short.out: ethiopian.out
	head -n 15 $< > $@

ethiopian.out: ethiopian
	./$^ > $@

ethiopian: ethiopian.cpp

%: %.cpp
	$(CXX) $(CFLAGS) $^ -o $@
