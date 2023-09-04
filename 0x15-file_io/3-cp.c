#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define BUFFER_SIZE 1024

void check_argc(int argc);
int open_file_from(char *file);
int open_file_to(char *file, int file_from);
void copy_files(int file_from, int file_to);
void close_files(int file_from, int file_to);

/**
 * main - program that copies the content of a file to another file
 * @argc: num argument
 * @argv: string argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;

	check_argc(argc);
	file_from = open_file_from(argv[1]);
	file_to = open_file_to(argv[2], file_from);
	copy_files(file_from, file_to);
	close_files(file_from, file_to);
	return (0);
}

/**
 * check_argc - checks the number of command line arguments
 * @argc: the number of command line arguments
 *
 * Description: If the number of command line arguments is not equal to 3,
 * prints a usage message and exits with a status of 97.
 */
void check_argc(int argc)
{
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
}

/**
 * open_file_from - opens the source file
 * @file: the name of the source file
 *
 * Return: the file descriptor of the opened source file
 *
 * Description: Attempts to open the source file for reading. If an error
 * occurs, prints an error message and exits 98.
 */
int open_file_from(char *file)
{
	int file_from = open(file, O_RDONLY);

	if (file_from == -1)
		perror(file), exit(98);
	return (file_from);
}

/**
 * open_file_to - opens the destination file
 * @file: the name of the destination file
 * @file_from: the file descriptor of the source file
 *
 * Return: the file descriptor of the opened destination file
 *
 * Description: Attempts to open the destination file for writing. If it does
 * not exist, creates it with permissions rw-rw-r--. If an error occurs,
 * prints an error message, closes the source file,exits with a status of 99.
 */
int open_file_to(char *file, int file_from)
{
	int file_to = open(file, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
		perror(file), close(file_from), exit(99);
	return (file_to);
}

/**
 * copy_files - copies the content of one file to another
 * @file_from: the file descriptor of the source file
 * @file_to: the file descriptor of the destination file
 *
 * Description: Reads from the source file and
 * writes to the destination file.
 * If an error occurs, prints an error message and exits
 * with a status of 98 or 99, respectively.
 */
void copy_files(int file_from, int file_to)
{
	int num1 = BUFFER_SIZE, num2 = 0;
	char buf[BUFFER_SIZE];

	while (num1 == BUFFER_SIZE)
	{
		num1 = read(file_from, buf, BUFFER_SIZE);
		if (num1 == -1)
			perror("Error: Can't read from file"), exit(98);
		num2 = write(file_to, buf, num1);
		if (num2 < num1)
			perror("Error: Can't write to"), exit(99);
	}
}

/**
 * close_files - closes two files
 * @file_from: the file descriptor of the first file
 * @file_to: the file descriptor of the second file
 *
 * Description: Attempts to close both files. If an error occurs while closing
 * either file, prints an error message and exits with a status of 100.
 */
void close_files(int file_from, int file_to)
{
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
}
