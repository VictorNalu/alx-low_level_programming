#include "main.h"
/**
 * _strchr - main function
 * @s: function parameter
 * @c: function parameter
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int q;

	for (q = 0; s[q] >= '\0'; q++)
	{
		if (s[q] == c)
		return (s + q);
}
	return (0);
}
