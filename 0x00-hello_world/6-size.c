#include <stdio.h>


/**
 * main - main fuction is for entry.
 *
 * Return: return 0 is for success.
 */
int main(void)
{
	char C;
	int I;
	long int L;
	long long int S;
	float F;

	printf("Size of a char: %lu byte(s)\n", sizeof(C));
	printf("Size of an int: %lu byte(s)\n", sizeof(I));
	printf("Size of a long int: %lu byte(s)\n", sizeof(L));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(S));
	printf("Size of a float: %lu byte(s)\n", sizeof(F));
	return (0);
}
