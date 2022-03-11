#include "main.h"

/**
 * _isdigit - will determain if the input is uppercase or lower case
 * @c: inputted character to determain case
 *
 * Description: long description
 *
 * Return: will return 1 if upper case or 0 if otherwise
 */
int _isdigit(int c)
{
	int x;

	if (c >= 48 && c <= 57)
		x = 1;
	else
		x = 0;
	return (x);
}
