#include "main.h"

/**
 * _atoi - this function converts a string into an integer.
 *
 * @s: this is the string to use in the program.
 *
 * Return: integer.
 */

int _atoi(char *s)
{
	int sign = 1, z = 0;
	unsigned int res = 0;

	while (!(s[z] <= '9' && s[z] >= '0') && s[z] != '\0')
	{
		if (s[z] == '-')
			sign *= -1;
		z++;
	}
	while (s[z] <= '9' && (s[z] >= '0' && s[z] != '\0'))
	{
		res = (res * 10) + (s[z] - '0');
		z++;
	}
	res *= sign;
	return (res);
}
