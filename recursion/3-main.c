#include <stdio.h>
#include "3-factorial.h"

int main() {
	int number = 5;
	int result;

	result = factorial(number);
	printf("The factorila of %d is %d\n", number, result);

	return 0;
}
