#include <stdio.h>
// Find the sum of all the multiples of 3 or 5 below 1000.

int q1() {
	int total = 0;

	for (int i = 0; i < 1000; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			total += i;
		}
	}

	printf("Sum: %d", total);

	return 0;
}