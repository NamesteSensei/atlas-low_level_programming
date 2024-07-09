#ifndef MAIN_H
#define MAIN_H

/* Prototype for function that converts a binary number to an unsigned int */
unsigned int binary_to_uint(const char *b);

/* Prototype for function that prints the binary representation of a number */
void print_binary(unsigned long int n);

/* Prototype for function that returns the value of a bit at a given index */
int get_bit(unsigned long int n, unsigned int index);

/* Prototype for function that sets the value of a bit to 1 at a given index */
int set_bit(unsigned long int *n, unsigned int index);

/* Prototype for function that sets the value of a bit to 0 at a given index */
int clear_bit(unsigned long int *n, unsigned int index);

/* Prototype for function that returns the number of bits to flip to get from one number to another */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* Prototype for _putchar function */
int _putchar(char c);

#endif /* MAIN_H */

