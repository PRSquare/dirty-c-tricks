#include "stdio.h"

void func(int *p) {
	// Here we changing the value stored in address -24(%rbp)
	// where the value of b from main is stored
	*(p-1) = 30;
}

int main(void) {
	// Declaring two variables
	int a = 10;
	int b = 20;
	// Declaring pointers to this varables
	int *p1 = &a;
	int *p2 = &b;
	// Both pointers is necessary to align variables on stack
	// in my case 
	// a: -20(%rbp)
	// b: -24(%rbp)

	printf("a = %d, b = %d;\ncalling func\n", a, b);
	// Expected output: a = 10, b = 20;

	func(p1);

	printf("a = %d, b = %d\n;", a, b);
	// Expected output: a = 10, b = 30;

	return 0;
}