#include "main.h"

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
 * _strpbrk - will look for first match of string types
 * @s: string to seach
 * @accept: character to look for
 * Description: long description
 *
 * Return: will return first instance of accpected characters
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int length = _strlen(accept);
	unsigned int acceptCount = 0;
	unsigned int sCount = 0;

	while ((s[sCount] != ' ') && (s[sCount] != '\0'))
	{
		while (acceptCount < length)
		{
			if (accept[acceptCount] == s[sCount])
				return (&s[sCount]);
			acceptCount++;
		}
		acceptCount = 0;
		sCount++;
	}
	return (0);
}
