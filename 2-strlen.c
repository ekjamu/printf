#include "main.h"
#include <stdlib.h>

/**
 * _strlen - will return the length of the string passed through
 * @s: the string we need to count
 * Description: long description
 *
 * Return: the length of the string
 */
int _strlen(const char *s)
{
	char string;
	int counter = 0;

	if (s != NULL)
	{
		string = *s;
		while (string != '\0')
		{
			counter++;
			string = *(s + counter);
		}
		return (counter);
	}
	else
		return (0);
}
