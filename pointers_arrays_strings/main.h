#ifndef MAIN_H
#define MAIN_H

/* Function that writes the character c to stdout */
int _putchar(char c);

/* Function that locates a character in a string */
char *_strchr(char *s, char c);

/* Function that gets the length of a prefix substring */
unsigned int _strspn(char *s, char *accept);

/* Function that searches a string for any of a set of bytes */
char *_strpbrk(char *s, char *accept);

/* Function that locates a substring */
char *_strstr(char *haystack, char *needle);

/* Function that prints the chessboard */
void print_chessboard(char (*a)[8]);

/* Function that concatenates two strings */
char *_strcat(char *dest, char *src);

/* Function that concatenates two strings using at most n bytes from src */
char *_strncat(char *dest, char *src, int n);

/* Function that copies a string */
char *_strncpy(char *dest, char *src, int n);

/* Function that compares two strings */
int _strcmp(char *s1, char *s2);

/* Function that reverses the content of an array of integers */
void reverse_array(int *a, int n);

/* Function that changes all lowercase letters of a string to uppercase */
char *string_toupper(char *);

/* Function that capitalizes all words of a string */
char *cap_string(char *);

#endif /* MAIN_H */

