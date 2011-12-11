// Copyright (c) 2011 Martin Ueding <dev@martin-ueding.de>

#include <iostream>

int main() {
	int* pointer;
	pointer = (int*) 0xDEADBEEF;
	int array[10];

	pointer = array;
	array = pointer;
	pointer = &array[3];
	array[3] = pointer[5];

	return 0;
}
