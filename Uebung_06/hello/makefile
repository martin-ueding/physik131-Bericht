include ../../makefile.common

hello.out: hello
	./$^ > $@

hello: hello.cpp

%: %.cpp
	$(CXX) $(CFLAGS) $^ -o $@
