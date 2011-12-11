#include <iostream>

using namespace std;

void swap(int *x, int *y) {
	int z;
	z = *x;
	*x = *y;
	*y = z;
}

int main() {
	int x = 2, y = 3;
	cout << x << " " << y << endl;
	swap(&x, &y);
	cout << x << " " << y << endl;
	return 0;
}

