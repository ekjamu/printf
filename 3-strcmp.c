#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compare two string values
 * @s1: first string to compare
 * @s2: second string to compare
 * Description: long description
 *
 * Return: the difference between the strings
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int retValue = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			break;
		if (s2[i] == '\0')
			break;
		i++;
	}
	retValue = s1[i] - s2[i];
	return (retValue);
}
