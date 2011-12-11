// Copyright (c) 2011 Martin Ueding <dev@martin-ueding.de>

#include <cmath>
#include <fstream>
#include <iostream>

#define LENGTH 50

struct measurement {
	double voltage;
	double current;
};

int main(int argc, char** argv) {
	if (argc != 3) {
		std::cout << "Usage: bericht in out" << std::endl;
		return 1;
	}

	std::ifstream infile;
	infile.open(argv[1]);

	std::ofstream outfile;
	outfile.open(argv[2], std::ofstream::out);

	struct measurement cur, sum, average;
	sum.voltage = 0.0;
	sum.current = 0.0;

	double sum_power = 0.0;
	double sum_voltage_squared = 0.0;

	int n = 0;

	for (; n < LENGTH && infile.good();) {
		infile >> cur.voltage >> cur.current;

		if (!infile.good()) {
			break;
		}

		n++;

		sum.voltage += cur.voltage;
		sum.current += cur.current;

		sum_power += cur.voltage * cur.current;
		sum_voltage_squared += pow(cur.voltage, 2);

		outfile << cur.voltage << " " << cur.current << " " << cur.voltage / cur.current << std::endl;
	}

	infile.close();
	outfile.close();

	average.voltage = sum.voltage / n;
	average.current = sum.current / n;

	double average_power = sum_power / n;
	double average_voltage_squared = sum_voltage_squared / n;

	double m = (average_power - average.voltage * average.current) / (average_voltage_squared - pow(average.voltage, 2));
	double c = average.current - m * average.current;

	std::cout << "Means: " << average.voltage << " V, " << average.current << " A" << std::endl;
	std::cout << "Means: " << average_power << " V^2, " << average_voltage_squared << " W" << std::endl ;
	std::cout << "m: " << m << ", c: " << c << std::endl ;

	std::ofstream means;
	means.open("means.dat", std::ofstream::out);

	means << "Means: " << average.voltage << " V, " << average.current << " A" << std::endl;
	means << "Means: " << average_power << " V^2, " << average_voltage_squared << " W" << std::endl ;
	means << "m: " << m << ", c: " << c << std::endl ;

	means.close();

	return 0;
}
