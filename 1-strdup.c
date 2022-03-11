#include <stdlib.h>
#include "main.h"

/**
 * _strcpy - a string to copy to a saved buffer
 * @dest: buffer for string
 * @src: the string we are going to copy
 * Description: long description
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int counter = _strlen(src);
	int i = 0;

	while (i <= counter)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/**
 * _strlen - will return the length of the string passed through
 * @s: the string we need to count
 * Description: long description
 *
 * Return: the length of the string
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
 * _strdup - duplicate string
 * @str: the string we will duplicate.
 * Description: long description
 *
 * Return: pointer to new string or null
 */
char *_strdup(char *str)
{
	int len;
	char *cpy;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	cpy = malloc(len + 1);
	if (cpy == NULL)
		return (NULL);
	_strcpy(cpy, str);
	return (cpy);
}
