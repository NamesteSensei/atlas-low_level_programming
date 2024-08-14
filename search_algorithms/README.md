# Search Algorithms

This project covers the implementation of basic search algorithms in C, following the Betty coding style and using standard library functions. The goal is to understand and implement different search techniques and analyze their efficiency.

## Learning Objectives

By the end of this project, you should be able to:

- Explain what a search algorithm is.
- Understand and implement a linear search.
- Understand and implement a binary search.
- Identify the best search algorithm to use depending on the situation.

## Files

### 0-linear.c

- **Description**: This file contains the implementation of a linear search algorithm. The linear search algorithm checks each element of an array until it finds the target value.
- **Prototype**: `int linear_search(int *array, size_t size, int value);`
- **Return**: The first index where the value is found, or `-1` if not found.

### search_algos.h

- **Description**: Header file containing the prototypes for the search algorithms implemented in this project.
- **Prototypes**:
  - `int linear_search(int *array, size_t size, int value);`

## Usage

To compile and run the code, use the following commands:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 main.c 0-linear.c -o 0-linear
./0-linear

