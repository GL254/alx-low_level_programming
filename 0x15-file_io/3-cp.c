#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * close_file - closes FD.
 * @fd: file descriptor to close.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * create_buffer - alloc 1024 bytes to a buf.
 * @file: file name buf is storing chars for.
 *
 * Return: newly alloc buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}
/**
 * main - copy file contents to another.
 * @argv: argument tokens array.
 * @argc: argument count.
 *
 * Description: incorrect argument count - exit code 97
 * non existent file - exit code 98
 * cannot write or create a file - exit code 99
 * if file_to and file_from cannot close - exit code 100
 *
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		return (97);
	}
	
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		return (99);
	}

	close(fd_to);
	close(fd_from);
	return (0);
}
