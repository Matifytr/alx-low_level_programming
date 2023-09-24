#include "main.h"
/**
 * _strstr - Entry point of the program.
 * @haystack: input value.
 * @needle: input value.
 * Return: Always 0 is a succes.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *p = haystack;
		char *s = needle;

		while (*p == *s && *s != '\0')
		{
			p++;
			s++;
		}

		if (*s == '\0')
			return (haystack);
	}

	return (0);
}
