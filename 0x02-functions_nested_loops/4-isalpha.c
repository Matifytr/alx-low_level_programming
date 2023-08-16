#include "main.h"

/**
 * _isalpha - checks alphabet character.
 * Return: 1 for alphabet characters otherwise 0.
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
