#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry point in the program.
 * @s: input value.
 * @c: input value.
 * Return: Always 0 is success.
 */
char *_strchr(char *s, char c)
{
	int q = 0;

	for (; s[q] >= '\0'; q++)
	{
		if (s[q] == c)
			return (&s[q]);
	}
	return (0);
}
