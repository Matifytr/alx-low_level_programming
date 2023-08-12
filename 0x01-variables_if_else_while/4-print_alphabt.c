#include <stdio.h>
/**
 * main - main function is for entries.
 * Description 'print alphabets except q and e'
 * Return: return 0 is success.
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
