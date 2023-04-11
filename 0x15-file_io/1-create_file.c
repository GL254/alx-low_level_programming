#include "main.h"

/**
 * create_file - function that will create a file with the fiven permissions.
 * @filename: name of the file to be created.
 * @text_content: contents of file to write.
 * Return: -1 if the function fails, 1 on success.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, wr = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_RDONLY | O_CREAT | O_WRONLY | O_TRUNC);
	wr = write(fd, text_content, len);

	if (fd == -1 || wr == -1)
	return (-1);

	close(fd);

	return (1);
}
