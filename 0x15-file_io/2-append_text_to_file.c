#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int y, r, old = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (old = 0; text_content[old];)
			old++;
	}
	y = open(filename, O_WRONLY | O_APPEND);
	r = write(y, text_content, old);

	if (y == -1 || r == -1)
		return (-1);

	close(y);
	return (1);
}
