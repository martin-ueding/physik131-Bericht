// Copyright (c) 2011 Martin Ueding <dev@martin-ueding.de>

#include <cstdio>
#include <fstream>
#include <iostream>

#define LENGTH 50

double mult(double a, double b) {
	return a * b;
}

int main() {
	std::ifstream infile;
	infile.open("data2.dat");

	double x[LENGTH], y[LENGTH];
	double mul[LENGTH], div[LENGTH], add[LENGTH];

	for (int n = 0; n < LENGTH && infile.good(); n++) {
		infile >> x[n] >> y[n];
		if (!infile.good()) {
			break;
		}

		printf("%10.3f * %10.3f = %10.3f\n", x[n], y[n], mult(x[n], y[n]));
	}

	return 0;
}
