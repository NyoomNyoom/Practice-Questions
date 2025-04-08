#include <stdio.h>
#include "Q2.h"

// Find the sum of the even Fibanacci numbers under 4 million.
int runQ2() {
	int sum = 2; // Because I am starting at i=5.
	int i1 = 3;
	int i2 = 2;

	for (int i = 5; i < 4000000; i = i1 + i2) {
		if (i % 2 == 0) {
			sum += i;
		}

		i2 = i1;
		i1 = i;
	}

	printf("sum: %d", sum);

	return 0;
}