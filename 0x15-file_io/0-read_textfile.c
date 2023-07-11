#include "main.h"

/**
 * read_textfile - reads text file and prints it to POSIX standard output.
 * @*filename: text file to read.
 * @letters: no. of letters to read.
 * Return: w(actual no of bytes read and printed), 0(failure), 0 (NULL)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t wr;
	ssize_t tx;
	char *buff = malloc(sizeof(char *) * letters);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	if (!filename)
		return (0);

	if (!buff)
		return (0);

	tx = read(fd, buff, letters);
	wr = write(STDOUT_FILENO, buff, tx);

	free(buff);
	close(fd);
	return (wr);
}
