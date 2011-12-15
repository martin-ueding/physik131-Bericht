#include <cstdio>
#include <cstdlib>
#include <iostream>

int main(int argc, char *argv[]) {
	int a;
	int b;
	int res;

	int i, j;
	for (i = 1; i <= 10; i++) {
		printf("%2d:", i);
		for (j = 1; j < i; j++) {
			printf("    ");
		}
		for (j = i; j <= 10; j++) {
			a = i;
			b = j;
			res = 0;


			while (a >= 1) {
				if (a % 2 == 1) {
					res += b;
				}

				a /= 2;
				b *= 2;
			}
			printf(" %3d", res);
		}
		std::cout << std::endl;
	}

	return 0;
}
