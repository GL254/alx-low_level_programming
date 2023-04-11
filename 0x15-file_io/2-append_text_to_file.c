#include "main.h"

/**
 * append_text_to_file - appends text to a file.
 * @filename: name of the file, if NULL return -1.
 * @text_content: string to add to the new file, if NULL, dont append.
 * Return:1 if it succeeds, -1 if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int append_file, len, w;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);
	{
		for (len = 0; text_content[len];)
			len++;
	}

	append_file = open(filename, O_WRONLY | O_APPEND);
	w = write(append_file, text_content, len);

	if (append_file == -1 || w == -1)
		return (-1);

	close(append_file);

	return (1);
}
