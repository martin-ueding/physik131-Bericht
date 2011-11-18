CXX=g++
CFLAGS=-Wall --pedantic

hello.out: hello
	./$^ > $@

hello: hello.cpp

%: %.cpp
	$(CXX) $(CFLAGS) $^ -o $@
