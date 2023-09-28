#include "main.h"

/**
 * flip_bits - this func. counts the num. of bits for change
 * from one number toanother.
 * @n: this func. represents first number.
 * @m: this func. represents the second number.
 *
 * Return: number of bits to change to be returned.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int o, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (o = 63; o >= 0; o--)
	{
		current = exclusive >> o;
		if (current & 1)
			count++;
	}

	return (count);
}
