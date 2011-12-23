#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iostream>

/**
 * Iterates one step with the heron algorithm.
 *
 * @param x Current best guess.
 * @param a Input value of which the root should be calculated.
 * @return Better guess.
 */
double iterate(double x, double a) {
	return (x + a / x) / 2;
}

/**
 * The main function.
 *
 * Parses a float from the second command line argument and calculates the
 * square root of that number. The result is printed on the screen.
 *
 * @param argc Number of command line arguments.
 * @param argv Command line arguments.
 * @return 0 on success, 1 on negative number, 2 if not enough arguments.
 */
int main(int argc, char **argv) {
	// Abort if the user did not a number on the command line.
	if (argc != 2) {
		std::cout << "Usage: heron number" << std::endl;
		return 2;
	}

	// Trust the user that he entered something that can be parsed as a float.
	// Parse the input into an automatic variable.
	double input = atof(argv[1]);

	// If the input is negative, abort. This algorithm would find that the
	// root of -4 is -2, which is not the case.
	if (input < 0) {
		std::cout << "Complex numbers do not exist." << std::endl;
		return 1;
	}

	// If the number changes by less then this amount (measured as ratio from
	// the input number), the result is probably somewhat accurate.
	double smallest_change = 1e-5;

	// In order to find out the change, the program needs to remember the last
	// state.
	double current, previous;

	// Set the previous value to something negative so that the program does
	// not abort right away.
	previous = -1 - smallest_change;

	// Start with the user supplied value.
	current = input;

	// Iterate while the difference between the current and previous step are
	// bigger than the set amount of the user's input value.
	while (fabs(current - previous) > smallest_change * input) {
		previous = current;

		// Apply the heron algorithm and go one step further.
		current = iterate(current, input);
	}

	// Sometimes, the algorithm steps over into the negative values.
	current = fabs(current);

	// Print the answer.
	printf("The square root of %f is %f.\n", input, current);

	// Return with a zero return value so that the calling shell knows that
	// everything went fine.
	return 0;
}
