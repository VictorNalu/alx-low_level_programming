#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the stdout
 * @filename: filename.
 * @letters: numbers of letters printed.
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int yt;
	ssize_t new, nt;
	char *grit;

	if (!filename)
		return (0);

	yt = open(filename, O_RDONLY);

	if (yt == -1)
		return (0);

	grit = malloc(sizeof(char) * (letters));
	if (!grit)
		return (0);

	new = read(yt, grit, letters);
	nt = write(STDOUT_FILENO, grit, new);

	close(yt);

	free(grit);

	return (nt);
}
