#include <stdio.h>
/**
 * main - main function.
 *
 * Return: 0 is success
 */

int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
