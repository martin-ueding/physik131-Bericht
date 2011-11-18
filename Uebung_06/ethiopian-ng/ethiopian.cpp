#include <cstdio>
#include <cstdlib>
#include <iostream>

int main(int argc, char *argv[]) {
	int a;
	int b;
	int res;

	for (a = 0; a <= 10; a++) {
		for (b = a; b <= 10; b++) {
			printf("Calculating %d times %d: \n", a, b);
			res = 0;

			while (a >= 1) {
				printf("-> %6d %6d\n", a, b);

				if (a % 2 == 1) {
					res += b;
				}

				a /= 2;
				b *= 2;
			}
			std::cout << "Result: " << res << std::endl;
			std::cout << std::endl;
		}

		return 0;
	}
}
