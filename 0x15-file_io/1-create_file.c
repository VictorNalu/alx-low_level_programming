#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 if it succeeds. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int rt;
	int x;
	int ew;

	if (!filename)
		return (-1);

	rt = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (rt == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (x = 0; text_content[x]; x++)
		;

	ew = write(rt, text_content, x);

	if (ew == -1)
		return (-1);

	close(rt);

	return (1);
}
