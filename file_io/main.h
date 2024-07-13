#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>

/**
 * File: main.h
 * Auth: Your Name
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x15. C - File I/O project.
 */

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         Otherwise - the actual number of bytes the function can read and
 *         print.
 */
ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */

