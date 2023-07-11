#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - copy content files from one to another.
 * @argc: The argument count
 * @argv: pointer arrays to the argument
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv)
{
	int from, to, rd, wr;
	char *buffer = malloc(sizeof(char) * 1024);
		if (argc != 3)
		{
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
		}

		if (buffer == NULL)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", file);
			exit(99);
		}
		return (buffer);




