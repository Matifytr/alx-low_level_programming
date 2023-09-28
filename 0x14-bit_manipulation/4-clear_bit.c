#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0.
 * @n: this is a func. to a pointer to the number to change
 * @index: this isthe index of the bit to clear.
 *
 * Return: 1 for success, -1 for failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
