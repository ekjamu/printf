#include "main.h"

/**
 * _strncpy - a string to copy to a saved buffer
 * @dest: buffer for string
 * @src: the string we are going to copy
 * @n: the number of characters to copy
 * Description: long description
 *
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((i < n) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
