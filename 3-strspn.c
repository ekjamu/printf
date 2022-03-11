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
 * _strspn - will count length of prefix substring
 * @s: the total string to search
 * @accept: the accepted characters to count
 * Description: long description
 *
 * Return: will return number of time letters counted
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int totalCount = 0;
	unsigned int length = _strlen(accept);
	unsigned int acceptCount = 0;
	unsigned int sCount = 0;

	while (acceptCount < length)
	{
		while ((s[sCount] != ' ') && (s[sCount] != '\0'))
		{
			if (accept[acceptCount] == s[sCount])
				totalCount++;
			sCount++;
		}
		sCount = 0;
		acceptCount++;
	}
	return (totalCount);
}
