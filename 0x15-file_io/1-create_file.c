#include "main.h"
#include <string.h>

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;
	int close_status;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		len = strlen(text_content);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	w = write(fd, text_content, len);
	if (fd == -1 || w == -1)
		return (-1);
	close_status = close(fd);
	if (close_status == -1)
		return (-1);
	return (1);
}
