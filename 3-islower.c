#include "main.h"

/**
 * _islower - short description
 * @c: the inputting character to test
 *
 * Description: long description
 *
 * Return: 1 if lowercase, 0 if otherwise
 */
int _islower(int c)
{
	int x;

	if (c > 96 && c < 123)
	{
		x = 1;
	} else
	{
		x = 0;
	}
	return (x);
}
