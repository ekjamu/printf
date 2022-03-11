#include "main.h"

/**
 * _strlen - will return the length of the string passed through
 * @s: the string we need to count
 * Description: my initial code did not include this part
 * but i found an error (if the word i an looking for is not
 * in the string), and was trying to use this to resolve error.
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
 * is_full_word - will see if matching full word
 * @start: the starting memory location to look from
 * @test: the characters in the momeory we are testing
 * Description: long description
 *
 * Return: the length of the string
 */
int is_full_word(char *start, char *test)
{
	int x = 0;
	int length = _strlen(test);

	while (x < length)
	{
		if (test[x] == start[x])
		{
			x++;
		} else if (test[x] != start[x])
		{
			return (0);
		}
	}
	return (1);
}

/**
 * _strstr - will search for first instance of needle in haystack
 * @haystack: thi si sthe string to search
 * @needle: this is what i am loking for
 * Description: long description
 *
 * Return: will return pointer to begining to located substring
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int sCount = 0;
	unsigned int test = 0;
	unsigned int aCount = 0;
	unsigned int length = _strlen(needle);

	if (*needle == '\0')
		return (haystack);
	while (haystack[sCount] != '\0')
	{
		if (needle[0] == haystack[sCount])
		{
			test = is_full_word(&haystack[sCount], needle);
			if (test == 1)
				return (&haystack[sCount]);
		}
		sCount++;
	}

	while (haystack[sCount] != '\0')
	{
		while (aCount < length)
		{
			if (needle[aCount] == haystack[sCount])
				return (&haystack[sCount]);
			aCount++;
		}
		aCount = 0;
		sCount++;
	}

	return (0);
}
