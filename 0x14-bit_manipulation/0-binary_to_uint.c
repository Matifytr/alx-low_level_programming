#include "main.h"

/**
 * binary_to_uint - this function converts a binary num. to unsigned int.
 * @b: this is the string containing the binary num.
 *
 * Return: the converted number to bet returned.
 */
unsigned int binary_to_uint(const char *b)
{
	int p;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (p = 0; b[p]; p++)
	{
		if (b[p] < '0' || b[p] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[p] - '0');
	}

	return (dec_val);
}
