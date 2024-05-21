#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // This part makes sure we get a different number each time we play the game.
    srand(time(0));

    // The magic box gives us a number.
    int n = rand();

    // Let's check the last digit of our number.
    int lastDigit = n % 10;

    printf("Last digit of ");
    printf("%d", n);
    printf(" is ");

    if (lastDigit > 5) {
        printf("and is greater than 5\n");
    } else if (lastDigit == 0) {
        printf("and is 0\n");
    } else {
        printf("and is less than 6 and not 0\n");
    }

    return 0;
}
	
