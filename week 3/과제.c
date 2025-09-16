#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main(void) {
	int A;
	int P = 100;
	int R = 0.1;
	int N = 12;
	int T = 40;

	int pow = ((P * (1 + (R / N))), (N * T));

	printf("A = %d", pow);
	
	return 0;
}