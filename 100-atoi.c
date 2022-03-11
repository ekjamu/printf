#include "main.h"
#include <stdio.h>
/**
 * _atoi - will print numbers in string
 * @s: the string we want ot search for numbers
 * Description: long description
 *
 * Return: will return nothing
 */
int _atoi(char *s)
{
	unsigned int value = 0;
	int numOfNeg = 0;
	int posNeg = 1;

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			break;
		}
		if (*s  == '-')
		{
			numOfNeg++;
		}
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		value *= 10;
		value += (*s - '0');
		s++;
	}
	if (numOfNeg % 2 != 0)
		posNeg = -1;
	return (value * posNeg);
}
