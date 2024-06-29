#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stddef.h> 

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: Number of parameters.
 *
 * Return: The sum of all parameters, or 0 if n is 0.
 *
 * This function accepts a variable number of integer arguments and returns
 * their sum. If no arguments are passed, it returns 0.
 */
int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *
 * This function prints each number in the provided list of arguments,
 * separated by the specified separator string. If the separator is NULL,
 * no separator is printed. A newline is printed after all the numbers.
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 *
 * This function prints each string in the provided list of arguments,
 * separated by the specified separator string. If the separator is NULL,
 * no separator is printed. If a string is NULL, it prints "(nil)" instead.
 * A newline is printed after all the strings.
 */
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * array_iterator - Executes a function given as a parameter on each element
 *                  of an array.
 * @array: The array to iterate over.
 * @size: The size of the array.
 * @action: A pointer to the function to be executed on each element.
 *
 * This function iterates over each element of the given array and executes
 * the specified action function on each element. The action function takes
 * an integer as its parameter.
 */
void array_iterator(int *array, size_t size, void (*action)(int));

/**
 * print_all - Prints anything based on the format string.
 * @format: A string containing format specifiers.
 *
 * This function prints values based on the format string provided:
 * - 'c': char
 * - 'i': integer
 * - 'f': float
 * - 's': char * (string)
 * It handles a variable number of arguments after the format string.
 */
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */

