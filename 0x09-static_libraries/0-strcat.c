#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * @dest: input value.
 * @src: input value.
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int r;
	int b;

	r = 0;
	while (dest[r] != '\0')
	{
		r++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[r] = src[b];
		r++;
		b++;
	}

	dest[r] = '\0';
	return (dest);
}
