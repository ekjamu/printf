#include "main.h"

/**
 * _memset - will set certain amount of memory space to a character
 * @s: where the memory is to be stored
 * @b: what is going to be stored in the memory
 * @n: the number of times over b is going to be stored
 * Description: long description
 *
 * Return: wil return pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter = 0;

	while (counter < n)
	{
		s[counter] = b;
		counter++;
	}
	return (s);
}
