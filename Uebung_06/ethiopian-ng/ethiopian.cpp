#include <cstdio>
#include <cstdlib>
#include <iostream>

int main(int argc, char *argv[]) {
	int a;
	int b;
	int res;

	int i, j;
	for (i = 1; i <= 10; i++) {
		for (j = i; j <= 10; j++) {
			a = i;
			b = j;
			res = 0;

			printf("Calculating %d times %d: \n", a, b);

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
	}

		return 0;
}
