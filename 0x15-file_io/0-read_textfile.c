#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - prints it to the POSIX standard output.
 * @letters: number of letters it should read and print
 * @filename: the file for the letters
 * Return: actual number of letters it could read and print, 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *cutter;
	ssize_t gs, nwrite, nread;

	gs = open(filename, O_RDONLY);

	if (gs == -1)
		return (0);

	cutter = malloc(sizeof(char) * letters);
	nread = read(gs, cutter, letters);
	nwrite = write(STDOUT_FILENO, cutter, nread);

	free(cutter);
	close(gs);

	return (nwrite);
}
