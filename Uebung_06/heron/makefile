CXX=g++
CFLAGS=-Wall --pedantic

heron.out: heron
	./$^ 2 > $@

heron: heron.cpp

%: %.cpp
	$(CXX) $(CFLAGS) $^ -o $@
