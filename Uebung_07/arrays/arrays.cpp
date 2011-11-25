// Copyright (c) 2011 Martin Ueding <dev@martin-ueding.de>

#include <iostream>
#include <fstream>

#define LENGTH 50

int main() {
	std::ifstream infile;
	infile.open("data2.dat");

	double x[LENGTH], y[LENGTH];

	for (int n = 0; n < LENGTH && infile.good(); n++) {
		infile >> x[n] >> y[n];
		if (!infile.good())
			break;
		std::cout << x[n] << y[n] << std::endl;
	}

	return 0;
}
