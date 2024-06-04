#include <stdio.h>

size_t my_strspn(const char *str1, const char *str2) {
    const char *p = str1;
    while(*p) {
        const char *p2 = str2;
        while(*p2) {
            if(*p == *p2) {
                break;
            }
            p2++;
        }
        if(*p2 == '\0') {
            break;
        }
        p++;
    }
    return p - str1;
}

int main() {
    char str1[30] = "1234567890";
    char str2[30] = "123";
    printf("Length of initial segment matching str2 in str1: %zu\n", my_strspn(str1, str2));
    return 0;
}

