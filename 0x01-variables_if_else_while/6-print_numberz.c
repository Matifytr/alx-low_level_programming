#include <stdio.h>
/**
 * main - main function is for entries.
 *
 * Return: 0 is success.
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
