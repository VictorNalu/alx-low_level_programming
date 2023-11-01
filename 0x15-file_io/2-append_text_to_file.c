#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int rt;
	int x;
	int ew;

	if (!filename)
		return (-1);

	rt = open(filename, O_WRONLY | O_APPEND);

	if (rt == -1)
		return (-1);

	if (text_content)
	{
		for (x = 0; text_content[x]; x++)
			;

		ew = write(rt, text_content, x);

		if (ew == -1)
			return (-1);
	}

	close(rt);

	return (1);
}
