#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Assuming the random number generation part is here
    // int n = rand(); // Example of generating a random number

    // Generate a random number
    srand(time(0)); // Seed the random number generator
    int n = rand();

    // Extract the last digit of n
    int lastDigit = abs(n) % 10;

    // Determine the condition based on the last digit
    if (lastDigit > 5) {
        printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
    } else if (lastDigit == 0) {
        printf("Last digit of %d is %d and is 0\n", n, lastDigit);
    } else {
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
    }

    return 0;
}
	
