#include <stdio.h>
#include <math.h>
#include "Q3.h"

//Find the largest prime factor of a number.

void runQ3(double numIn) {
	double num = numIn;
	double runningNum = num;
	double runningFact = 2;
	int factNotFound = 0;

	while (factNotFound == 0) {
		if (remainder(runningNum, runningFact) == 0) {
			runningNum /= runningFact;
		}
		else {
			runningFact++;
			if (runningFact > (runningNum / 2)) {
				break;
			}
		}
	}

	printf("Largest prime factor: %lf", runningNum);
}