#include "stdio.h"

void func(int *p) {
	*(p-1) = 30;
}

int main(void) {
	int a = 10;
	int b = 20;
	int *p1 = &a;
	int *p2 = &b;

	printf("a = %d, b = %d;\ncalling func\n", a, b);

	func(p1);

	printf("a = %d, b = %d\n", a, b);

	return 0;
}