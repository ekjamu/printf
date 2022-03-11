#include "main.h"

/**
 * _isupper - will determain if the input is uppercase or lower case
 * @c: inputted character to determain case
 *
 * Description: long description
 *
 * Return: will return 1 if upper case or 0 if otherwise
 */
int _isupper(int c)
{
	int x;

	if (c >= 65 && c <= 90)
		x = 1;
	else
		x = 0;
	return (x);
}
