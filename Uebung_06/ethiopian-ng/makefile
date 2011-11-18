CXX=g++
CFLAGS=-Wall --pedantic

ethiopian.out: ethiopian
	./$^ > $@

ethiopian: ethiopian.cpp

%: %.cpp
	$(CXX) $(CFLAGS) $^ -o $@
