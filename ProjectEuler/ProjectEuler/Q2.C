#include <stdio.h>

// Find the sum of the even Fibanacci numbers under 4 million.
int q2() {
	int sum = 0;
	int i1 = 3;
	int i2 = 2;

	for (int i = 5; i < 10; i = i1 + i2) {
		printf("i1: %d, i2: %d, fib: %d", i1, i2, i);

		i2 = i1;
		i1 = i;
	}

	return 0;
}