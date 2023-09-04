#include "main.h"
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @letters: number of letters it should read and print
 * @filename: the file for the letters
 * Return: actual number of letters it could read and print, 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int gs;
	ssize_t nread, nwrite;
	char *cutter;

	if (filename == NULL)
		return (0);

	gs = open(filename, O_RDONLY);
	if (gs == -1)
		return (0);

	cutter = malloc(sizeof(char) * letters);

	if (cutter == NULL)
		return (0);

	nread = read(gs, cutter, letters);
	if (nread == -1)
		return (0);

	close(gs);

	nwrite = write(STDOUT_FILENO, cutter, nread);

	if (nwrite == -1 || nwrite != nread)
		return (0);

	free(cutter);
	return (nwrite);
}
