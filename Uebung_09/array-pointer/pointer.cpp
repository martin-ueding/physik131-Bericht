// Copyright (c) 2011 Martin Ueding <dev@martin-ueding.de>

#include <iostream>

int main() {
	int *pointer;
	pointer = (int*) 0xDEADBEEF;
	int array[10];

	pointer = array;
	// array = pointer;
	pointer = &array[3];
	array[3] = pointer[5];

	int *p1 = (int*) 0xDEADBEEF, *p2 = (int*) 0xDEADBEEF, i = 0;

	p1 = p2 + i;
	p1 = i + p2;
	// i = p1 * p2;
	i = p1 - p2;
	// i = p1 + p2;

	return 0;
}
