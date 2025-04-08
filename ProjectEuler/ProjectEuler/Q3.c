#include <stdio.h>
#include <math.h>
#include "Q3.h"

//Find the largest prime factor of a number.

// Works by trying to divide the final number by a factor with no remainder,
// when it reaches a factor that is larger than half of the current number, 
// the code prints that value as it is the largest prime factor of x number.
void runQ3(double numIn) {
	double num = numIn;
	double runningNum = num;
	double runningFact = 2;

	while (0 == 0) {
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