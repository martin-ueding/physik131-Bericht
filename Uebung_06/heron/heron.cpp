#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iostream>

double iterate(double x, double a) {
	return (x + a / x) / 2;
}

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Usage: heron number" << std::endl;
		return 2;
	}

	double input = atof(argv[1]);

	if (input < 0) {
		std::cout << "Complex numbers do not exist." << std::endl;
		return 1;
	}

	// If the number changes by less then this amount, it is probably somewhat
	// accurate.
	double smallest_change = 1e-5;

	double current, previous;

	previous = -1 - smallest_change;
	current = input;

	while (fabs(current - previous) > smallest_change * input) {
		previous = current;
		current = iterate(current, input);
	}

	current = fabs(current);

	printf("The square root of %f is in the ballpark of %f.\n", input, current);

	return 0;
}
