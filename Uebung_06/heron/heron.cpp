#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

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
main(int argc, char **argv) {
	// Trust the user that he entered something that can be parsed as a float.
	// Parse the a into an automatic variable.
	double a = atof(argv[1]);
	double x;

	// Start with the user supplied value.
	x = a;

	for (int i = 0; i < 10; i++) {
		// Print the x state of the calculation.
		cout << x << endl;

		// Apply the heron algorithm and go one step further.
		x = (x + a / x) / 2;
	}

	// Sometimes, the algorithm steps over into the negative values.
	x = fabs(x);

	// Print the answer.
	cout << endl;
	cout << "The square root of " << a << " is " << x << endl;
}
