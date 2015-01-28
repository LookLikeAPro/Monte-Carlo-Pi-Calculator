#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ARC4RANDOM_MAX      0x100000000

float getRand(){
	return ((float)arc4random() / ARC4RANDOM_MAX);
}

int main() {
	long unsigned int iteration = 0;
	long unsigned int inside = 0;
	while (1){
		if (sqrtf(powf(getRand(), 2) + powf(getRand(), 2))<1){
			iteration++;
			inside++;
		}
		else
			iteration++;
		if (iteration%1000==0)
			printf("%f\n", (float)inside/iteration*4);
	}
}
