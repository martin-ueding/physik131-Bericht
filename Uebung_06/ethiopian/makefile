CXX=g++
CFLAGS=-Wall --pedantic

ethiopian.out: ethiopian
	./$^ 14 36 > $@

ethiopian: ethiopian.cpp

%: %.cpp
	$(CXX) $(CFLAGS) $^ -o $@
