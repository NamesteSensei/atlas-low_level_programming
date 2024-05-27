#ifndef MAIN_H
#define MAIN_H

/* Function to print a character */
int _putchar(char c);

/* Function to check if a character is uppercase */
int _isupper(int c);

/* Function to check if a character is a digit */
int _isdigit(int c);

/* Function to multiply two integers */
int mul(int a, int b);

/* Function to print numbers from 0 to 9 */
void print_numbers(void);

/* Function to print numbers from 0 to 9, excluding 2 and 4 */
void print_most_numbers(void);

/* Function to print 10 times the numbers, from 0 to 14 */
void more_numbers(void);

/* Function to draw a straight line in the terminal */
void print_line(int n);

/* Function to draw a diagonal line on the terminal */
void print_diagonal(int n);

/* Function to draw a square on the terminal */
void print_square(int size);

/* Function to draw a triangle on the terminal */
void print_triangle(int size);

#endif /* MAIN_H */

