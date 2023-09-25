#include "main.h"
#include <stdlib.h>
/**
 * str_concat - this function get ends of input and add together for size.
 * @s1: input one to concatenate.
 * @s2: input two to concatenate.
 * Return: concat of s1 and s2.
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int h, qh;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	h = qh = 0;
	while (s1[h] != '\0')
		h++;
	while (s2[qh] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (h + qh + 1));

	if (conct == NULL)
		return (NULL);
	h = qh = 0;
	while (s1[h] != '\0')
	{
		conct[h] = s1[h];
		h++;
	}

	while (s2[qh] != '\0')
	{
		conct[h] = s2[qh];
		h++, qh++;
	}
	conct[h] = '\0';
	return (conct);
}
