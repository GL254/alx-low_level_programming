#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: file to be created.
 * @text_content: string to write to the file.
 *
 * Return: 1(success), -1 (failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, leng = 0;

	if (!filename)
		return (-1);

	if (!text_content)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC);
	wr = write(fd, text_content, leng);

	if (fd == -1)
		return (-1);

	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}

