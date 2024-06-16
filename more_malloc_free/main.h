#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void simple_print_buffer(char *buffer, unsigned int size);
int *array_range(int min, int max);

#endif /* MAIN_H */
