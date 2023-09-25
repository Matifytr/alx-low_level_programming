#include "main.h"
#include <stdlib.h>
/**
 * create_array - this function to  create array of size size and assign char c
 * @size: size of an array
 * @c: char to assign.
 * Description: create array of size size and assign char c.
 * Return: pointer to array, NULL if record failure.
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int y;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (y = 0; y < size; y++)
		str[y] = c;
	return (str);
}
