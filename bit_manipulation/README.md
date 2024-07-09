# Bit Manipulation Project

This project covers several functions for manipulating bits in C, as part of the low-level programming curriculum.

## Files

### 0-binary_to_uint.c

- **Function**: `unsigned int binary_to_uint(const char *b);`
- **Description**: Converts a binary number (given as a string) to an unsigned integer.
- **Returns**: The converted number, or 0 if:
  - There is one or more chars in the string `b` that is not `0` or `1`.
  - `b` is `NULL`.

### 1-print_binary.c

- **Function**: `void print_binary(unsigned long int n);`
- **Description**: Prints the binary representation of a number.
- **Constraints**:
  - Not allowed to use arrays.
  - Not allowed to use `malloc`.
  - Not allowed to use the `%` or `/` operators.

### 2-get_bit.c

- **Function**: `int get_bit(unsigned long int n, unsigned int index);`
- **Description**: Returns the value of a bit at a given index.
- **Returns**: The value of the bit at the given index, or -1 if an error occurred.

### 3-set_bit.c

- **Function**: `int set_bit(unsigned long int *n, unsigned int index);`
- **Description**: Sets the value of a bit to 1 at a given index.
- **Returns**: 1 if it worked, or -1 if an error occurred.

### 4-clear_bit.c

- **Function**: `int clear_bit(unsigned long int *n, unsigned int index);`
- **Description**: Sets the value of a bit to 0 at a given index.
- **Returns**: 1 if it worked, or -1 if an error occurred.

### 5-flip_bits.c

- **Function**: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
- **Description**: Returns the number of bits you would need to flip to get from one number to another.
- **Constraints**: Not allowed to use the `%` or `/` operators.

## Usage

To compile the project, use the following command:

```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <main_file.c> <source_file.c> -o <output_file>

