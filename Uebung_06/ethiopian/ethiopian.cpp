#include <iostream>

int main(int argc, char *argv[]) {
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	int res=0;
	while (a >= 1) {
		std::cout << a << "  " << b << std::endl;
		if (a%2==1) {
		res += b;
		}
		a/=2;
		b*=2;
	}
	std::cout << "Ergebnis: " << res << std::endl;

	return 0;
}
