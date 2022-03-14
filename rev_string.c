#include "main.h"

/**
 * rev_string - reverse a string in the memory
 * @s: string to reverse in memory
 * Description: long description
 *
 * Return: won't return anything
 */
void rev_string(char *s)
{
	char string = *s;
	char newString;
	int counter = 0;
	int i = 0;

	while (string != '\0')
	{
		counter++;
		string = *(s + counter);
	}
	counter--;

	while (i < counter)
	{
		newString = s[i];
		s[i] = s[counter];
		s[counter] = newString;
		counter--;
		i++;
	}
}
