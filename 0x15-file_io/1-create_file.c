#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int hd, w, flu = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (flu = 0; text_content[flu];)
			flu++;
	}

	hd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(hd, text_content, flu);

	if (hd == -1 || w == -1)
		return (-1);

	close(hd);
	return (1);
}
