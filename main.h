#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/* Function Prototypes */

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _isupper - checks for uppercase character
 * @c: character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c);

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: digit to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c);

/**
 * mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of the multiplication
 */
int mul(int a, int b);

/**
 * print_numbers - prints the numbers, from 0 to 9
 */
void print_numbers(void);

/**
 * print_most_numbers - prints the numbers, from 0 to 9, except 2 and 4
 */
void print_most_numbers(void);

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void);

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */
void print_line(int n);

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n);

/**
 * print_square - prints a square
 * @size: size of the square
 */
void print_square(int size);

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size);

#endif /* MAIN_H */

