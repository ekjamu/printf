#include "main.h"

/**
 * _memcpy - short description
 * @src: the memory source we want to copy
 * @dest: the location we want to store the memory
 * @n: the number of bytes to copy.
 * Description: long description
 *
 * Return: returns pointer to dest
 */
void *_memcpy(void *dest, void *src, unsigned int n)
{
	unsigned int counter = 0;
	char *fillDest = dest;
	char *fillSrc = src;

	while (counter < n)
	{
		fillDest[counter] = fillSrc[counter];
		counter++;
	}

	return (dest);
}
