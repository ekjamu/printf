#include "main.h"

/**
 * _strlen - will return the length of the string passed through
 * @s: the string we want to count.
 * Description: long description
 *
 * Return: count
 */
int _strlen(char *s)
{
	char string = *s;
	int counter = 0;

	while (string != '\0')
	{
		counter++;
		string = *(s + counter);
	}
	return (counter);
}
/**
 * _strncat - add src
 * to the end of dest until n.
 * @dest: will be the string that is added too
 * @src: the string to copy
 * @n: the amount of src to copy
 * Description: long description
 *
 * Return: pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{

	int startCopy = _strlen(dest);
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[startCopy] = src[i];
		i++;
		startCopy++;
	}
	dest[startCopy + 1] = '\0';
	return (dest);
}
