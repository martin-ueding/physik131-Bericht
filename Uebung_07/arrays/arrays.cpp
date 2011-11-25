// Copyright (c) 2011 Martin Ueding <dev@martin-ueding.de>

#include <cstdio>
#include <fstream>
#include <iostream>

#define LENGTH 50

double mult(double a, double b) {
	return a * b;
}

double add(double a, double b) {
	return a + b;
}

double div(double a, double b) {
	return a / b;
}

int main() {
	std::ifstream infile;
	infile.open("data2.dat");

	double x[LENGTH], y[LENGTH];
	double results_add[LENGTH];
	double results_mult[LENGTH];
	double results_div[LENGTH];

	for (int n = 0; n < LENGTH && infile.good(); n++) {
		infile >> x[n] >> y[n];
		if (!infile.good()) {
			break;
		}

		results_add[n] = add(x[n], y[n]);
		results_mult[n] = mult(x[n], y[n]);
		results_div[n] = div(x[n], y[n]);

		printf("%10.3f + %10.3f = %10.3f\n", x[n], y[n], results_add[n]);
		printf("%10.3f * %10.3f = %10.3f\n", x[n], y[n], results_mult[n]);
		printf("%10.3f / %10.3f = %10.3f\n", x[n], y[n], results_div[n]);
	}

	return 0;
}
