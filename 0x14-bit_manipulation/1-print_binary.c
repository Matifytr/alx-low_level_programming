#include "main.h"

/**
 * print_binary - it prints the binary equiv. of the decimal num.
 * @n: this func. represents the number to print in binary.
 */
void print_binary(unsigned long int n)
{
	int q, count = 0;
	unsigned long int current;

	for (q = 63; q >= 0; q--)
	{
		current = n >> q;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
