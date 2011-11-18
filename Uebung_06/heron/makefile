CXX=g++
CFLAGS=-Wall --pedantic

heron.out: heron
	./$^ > $@

heron: heron.cpp

%: %.cpp
	$(CXX) $(CFLAGS) $^ -o $@
