# File I/O Project

This project demonstrates basic file input/output operations in C, including reading from a file, creating a file, appending text to a file, and copying the content of one file to another.

## Project Structure

- `main.h`: Header file containing prototypes for all functions used in the project.
- `0-read_textfile.c`: Implementation of the function to read a text file and print it to the POSIX standard output.
- `1-create_file.c`: Implementation of the function to create a file.
- `2-append_text_to_file.c`: Implementation of the function to append text at the end of a file.
- `3-cp.c`: Implementation of the program to copy the content of one file to another.

## Function Descriptions

### `ssize_t read_textfile(const char *filename, size_t letters);`

Reads a text file and prints it to the POSIX standard output.

### `int create_file(const char *filename, char *text_content);`

Creates a file with specified content.

### `int append_text_to_file(const char *filename, char *text_content);`

Appends text at the end of a file.

### `int copy_file(const char *file_from, const char *file_to);`

Copies the content of a file to another file.

## Compilation

To compile the code, use the following commands:

```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-read_textfile.c -o read_textfile
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-create_file.c -o create_file
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-append_text_to_file.c -o append_text
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-cp.c -o cp

