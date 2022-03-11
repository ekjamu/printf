#include "main.h"

/**
 * _strlen - add src to the end of dest
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
 * char *_strcat - add src to the end of dest
 * @dest: will be the string that is added too
 * @src: the string to copy
 * Description: long description
 *
 * Return: pointer to dest.
 */
char *_strcat(char *dest, char *src)
{

	int startCopy = _strlen(dest);
	int i = 0;

	while (src[i] != '\0')
	{
		dest[startCopy] = src[i];
		i++;
		startCopy++;
	}
	dest[startCopy] = src[i];
	return (dest);
}
