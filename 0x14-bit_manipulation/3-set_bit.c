#include "main.h"

/**
 * set_bit - this functuin sets a bit at the given index to 1.
 * @n: a func. that is a pointer to the num. to change.
 * @index: this is mthe index of the bit to set to 1.
 *
 * Return: 1 for success and -1 for failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
