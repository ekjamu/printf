#include "main.h"
#include <stdlib.h>

/**
 * _strchr - short description
 * @s: THE STRING TO SEARCH
 * @c: the character to look for.
 * Description: long description
 *
 * Return: returns pointer to first occurance of c
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return (s);
}
