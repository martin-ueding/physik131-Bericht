#include <cstdio>
#include <cstdlib>
#include <iostream>

int main(int argc, char *argv[]) {
	if (argc != 3) {
		std::cout << "Usage: ethiopian NUMBER NUMBER" << std::endl;
		return 1;
	}

	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	int res = 0;

	while (a >= 1) {
		printf("%6d %6d\n", a, b);

		if (a % 2 == 1) {
			res += b;
		}

		a /= 2;
		b *= 2;
	}
	std::cout << "Ergebnis: " << res << std::endl;

	return 0;
}
