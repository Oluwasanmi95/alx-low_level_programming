#include "main.h"
/**
 * write_func - writes to file_to
 * @file_to: path to file
 * @buffer: string to write
 * @num: number of bytes to write
 *
 * Return: nothing
 */
void write_func(char *file_to, char **buffer, int *num)
{
	int fd;

	fd = open(file_to, O_WRONLY);
	if (fd != -1)
		truncate(file_to, 0);
	else
	{
		creat(file_to, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
		fd = open(file_to, O_WRONLY);
		chmod(file_to, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	}
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		exit(99);
	}
	*num = write(fd, *buffer, *num);
	if (*num == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		exit(99);
	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd -1\n");
		exit(100);
	}
}
/**
 * read_func - Reads from file_from
 * @file_from: path to file
 * @buffer: buffer
 * @byte_no: no of bytes to read
 * @num: num of characters read
 *
 * Return: nothing
 */
void read_func(char *file_from, char **buffer, int byte_no, int *num)
{
	int fd;

	fd = open(file_from, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	*num = read(fd, *buffer, byte_no);
	if (*num == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd -1\n");
		exit(100);
	}
}
/**
 * copy_file - copies from one file to the other
 * @file_from: file to copy from
 * @file_to: file to copy to
 *
 * Return: 1 if successful or (98,99,100)
 */
int copy_file(char *file_from, char *file_to)
{
	int num, byte_no = 1024;
	char *buffer = malloc(sizeof(char) * byte_no);

	if (buffer == NULL)
		return (-1);
	read_func(file_from, &buffer, byte_no, &num);
	write_func(file_to, &buffer, &num);
	free(buffer);
	return (1);
}
/**
 * main - check the code
 * @ac: number of arguments passed
 * @av: array of strings
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int num;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp %s %s\n", av[1], av[2]);
		exit(97);
	}

	num = copy_file(av[1], av[2]);

	if (num != 1)
		dprintf(STDERR_FILENO, "Error %d occured\n", errno);
	else
		dprintf(STDOUT_FILENO, "Copy Successful");

	return (1);
}
