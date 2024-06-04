#include <stdio.h>

// Assuming the function prototype is available in a header file
// or you can declare it here if it's not in a header file.
size_t my_strspn(const char *str1, const char *str2);

int main() {
    char str1[30] = "1234567890";
    char str2[30] = "123";
    printf("Length of initial segment matching str2 in str1: %zu\n", my_strspn(str1, str2));
    return 0;
}

