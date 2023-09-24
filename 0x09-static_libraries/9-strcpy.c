#include "main.h"

/**
 * char *_strcpy - copies the string pointed to by src
 * @dest: copy to function
 * @src: copy from funtion
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0;
	int q = 0;

	while (*(src + j) != '\0')
	{
		j++;
	}
	for ( ; q < j ; q++)
	{
		dest[q] = src[q];
	}
	dest[j] = '\0';
	return (dest);
}
