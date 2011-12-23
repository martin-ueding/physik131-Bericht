#include <cmath>
#include <fstream>
#include <iostream>

// Encapsulate the maximum length of the data sets in a define statement.
#define LENGTH 50

/**
 * Tuple of measurement data.
 */
struct measurement {
	double voltage;
	double current;
	double e_voltage;
	double e_current;
};

/**
 * Main function.
 *
 * Iterates through the data files, calculates some statistic values and writes
 * it to the output files.
 *
 * @return 0 on success, 1 if not enough arguments.
 */
int main(int argc, char **argv) {
	// Abort if there are no two file names in the command line options.
	if (argc != 3) {
		std::cout << "Usage: bericht in out" << std::endl;
		return 1;
	}

	// Open the input file.
	std::ifstream infile;
	infile.open(argv[1]);

	// Open the output file.
	std::ofstream outfile;
	outfile.open(argv[2], std::ofstream::out);

	// Create variables that hold the accumulated data.
	struct measurement cur, sum, avg;

	// Initialize these data field since C++ does not do this for us.
	sum.voltage = 0.0;
	sum.current = 0.0;

	// Create some scalar values for other statistic values.
	double sum_power = 0.0;
	double sum_voltage_squared = 0.0;

	// The counter for the for loop is outside of the for loop so that it's
	// value is not removed from the automatic memory once the loop is over.
	// After the loop, it contains the number of data sets.
	int n = 0;

	// Iterate through all the lines in the data file until end of file (EOF)
	// is reached.
	for (; n < LENGTH && infile.good();) {
		// Parse the line from the input file.
		infile >> cur.voltage >> cur.current >> cur.e_voltage >> cur.e_current;

		// In case the last line was read, abort right here.
		if (!infile.good()) {
			break;
		}

		// Increase n to show that another line has been read.
		n++;

		// Sum the just read values to the accumulator variables.
		sum.voltage += cur.voltage;
		sum.current += cur.current;

		// Sum the just read values to the other statistic variables.
		sum_power += cur.voltage * cur.current;
		sum_voltage_squared += pow(cur.voltage, 2);

		// Calculate the resistance.
		double resistance = cur.voltage / cur.current;

		// Calculate the combined error.
		double e_resistance = sqrt(pow(cur.e_voltage, 2) + pow(cur.e_current, 2));

		// Write the set into the output file.
		outfile << cur.voltage << "\t" << cur.current << "\t" << cur.e_voltage <<
			"\t" << cur.e_current << "\t" << resistance << "\t" << e_resistance <<
			std::endl;
	}

	// Close the input and output file.
	infile.close();
	outfile.close();

	// Calculate the average voltage and current.
	avg.voltage = sum.voltage / n;
	avg.current = sum.current / n;

	// Calculate average power and voltage^2.
	double avg_power = sum_power / n;
	double avg_voltage_squared = sum_voltage_squared / n;

	// Calculate the linear fit for this data.
	double m = (avg_power - avg.voltage * avg.current)
	           / (avg_voltage_squared - pow(avg.voltage, 2));
	double c = avg.current - m * avg.current;

	// Print the means and slope.
	std::cout << "Means: " << avg.voltage << " V, " << avg.current << " A"
	          << std::endl;
	std::cout << "Means: " << avg_power << " V^2, " << avg_voltage_squared
	          << " W" << std::endl ;
	std::cout << "m: " << m << ", c: " << c << std::endl ;

	// Write the same data to the means.dat output file.
	std::ofstream means;
	means.open("means.dat", std::ofstream::out);

	means << "Means: " << avg.voltage << " V, " << avg.current << " A"
	      << std::endl;
	means << "Means: " << avg_power << " V^2, " << avg_voltage_squared << " W"
	      << std::endl;
	means << "m: " << m << ", c: " << c << std::endl ;

	means.close();

	// Return with a success.
	return 0;
}
