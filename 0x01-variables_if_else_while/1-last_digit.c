#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main function is mainly for entries.
 *
 * Return: return to 0 is success.
 */

int main(void)
{
	int n;

	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	if (a > 5)
		printf("Last digit of %d is %d and greater than 5\n", n, a);
	if (a == 0)
		printf("Last digit of %d is %d and is 0\n", n, n, a);
	if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
	return (0);
}
