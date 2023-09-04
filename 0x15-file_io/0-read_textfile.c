#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file and print to STDOUT.
 * @filename: The name of the text file being read.
 * @letters: The number of letters to be read.
 * Return: The actual number of bytes read and printed,
 *         0 when the function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *read_buffer;
	ssize_t file_descriptor;
	ssize_t bytes_read;
	ssize_t bytes_written;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	read_buffer = malloc(sizeof(char) * letters);
	if (read_buffer == NULL)
		return (0);
	bytes_read = read(file_descriptor, read_buffer, letters);
	if (bytes_read == -1)
		return (0);
	bytes_written = write(STDOUT_FILENO, read_buffer, bytes_read);
	if (bytes_written == -1)
		return (0);
	free(read_buffer);
	close(file_descriptor);
	return (bytes_written);
}
