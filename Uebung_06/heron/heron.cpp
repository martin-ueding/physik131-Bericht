// Copyright (c) 2011 Martin Ueding <dev@martin-ueding.de>

#include <iostream>
#include <cstdlib>

double iterate(double x, double a) {
	return (x + a/x)/2;
}
	

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Usage: heron number" << std::endl;
		return 1;
	}

	double input = atof(argv[1]);


	return 0;
}
