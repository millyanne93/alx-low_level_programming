#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Pointer to the filename.
 * @text_content: The content to append.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0;
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i] != '\0')
		i++;
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	bytes_written = write(fd, text_content, i);
	if (bytes_written == -1)
		return (-1);
	close(fd);
	return (1);
}
