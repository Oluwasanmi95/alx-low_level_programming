#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: file to be edited
 * @text_content: string to append
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
		fd = write(fd, text_content, strlen(text_content));
	if (fd == -1)
		return (-1);

	return (1);
}
