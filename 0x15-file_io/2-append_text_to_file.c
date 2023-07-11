#include "main.h"

/**
 * append_text_to_file -  appends text at the end of a file
 * @filename: name of the file.
 * @text_content: tring added to the end of the file.
 *
 * Return: -1(failure/NULL),-1 (if file does not exist), 1 (if file exist)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, leng = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, leng);

	if (op == -1)
		return (-1);
	if (wr == -1)
		return (-1);

	close(op);

	return (1);
}

