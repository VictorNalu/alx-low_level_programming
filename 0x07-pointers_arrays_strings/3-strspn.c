#include "main.h"

/**
 * _strchr - main function
 * @s: Function parameter
 * @c: Function parameter
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int g;

	for (g = 0; s[g] >= '\0'; g++)
	{
		if (s[g] == c)
			return (s + g);
	}
		return (0);
}
