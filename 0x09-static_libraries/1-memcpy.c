#include "main.h"
/**
 *_memcpy - this is a function that copies the memory area.
 *@dest: memory where is stored.
 *@src: memory where is copied.
 *@n: number of bytes.
 *
 *Return: copied memory with n byted changedd.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int o = 0;
	int u = n;

	for (; o < u; o++)
	{
		dest[o] = src[o];
		n--;
	}
	return (dest);
}
