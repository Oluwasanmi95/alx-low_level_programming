#include "main.h"
/**
 * read_textfile -  reads a text file and prints it to the standard output
 * @filename: file to be read
 * @letters: number of characters to read
 *
 * Return:  actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *c = malloc(sizeof(char *) * letters);
	ssize_t num;

	if (c == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	num = read(fd, c, letters);
	if (num == -1)
		return (0);

	num = write(1, c, num);
	if (num == -1)
		return (0);

	close(fd);
	free(c);

	return (num);
}
