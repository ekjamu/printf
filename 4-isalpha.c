#include "main.h"

/**
* _isalpha - short description
* @c: the inputting character to test
*
* Description: long description
*
* Return: 1 if letter (lowercase or uppercase), 0 if otherwise
*/
int _isalpha(int c)
{
	int x;

	if (c > 96 && c < 123)
	{
		x = 1;
	} else if (c > 64 && c < 91)
	{
		x = 1;
	} else
	{
		x = 0;
	}
	return (x);
}
