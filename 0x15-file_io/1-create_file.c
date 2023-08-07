#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename: file to be created
 * @text_content: contents of file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (truncate(filename, 0) == -1)
		return (-1);
	if (chmod(filename, S_IRUSR | S_IWUSR) == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (0);
	}

	fd = write(fd, text_content, strlen(text_content));
	if (fd == -1)
		return (-1);
	return (1);
}
