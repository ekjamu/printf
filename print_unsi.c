#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#include <stdlib.h>

/**
  * print_uns - will print unsigned ints.
  * @format: char * to edit
  * @var: the list element to handle
  * Return: if argument is NULL, return pointer
  */
char *print_uns(char *format, va_list *var)
{
	char *formatEnd;
	unsigned long int number = 0, i = 0;
	char printNum[20];
	char *convert = "0123456789";

	number = va_arg(*var, unsigned long int);
	/* perhaps we should exit here instead as printf wouldn't compile */
	formatEnd = malloc(sizeof(*formatEnd) * (_strlen(format) + 1));
	if (formatEnd == NULL)
		return (NULL);

	while (number > 9)
	{
		*(printNum + i) = *(convert + (number % 10));
		i++;
		number = number / 10;
	}
	*(printNum + i) = *(convert + (number % 10));
	i++;
	*(printNum + i) = '\0';
	rev_string(printNum);
	_strcpy(formatEnd, format);
	_strcpy(format, printNum);

	format = format + _strlen(printNum);

	if (_strlen(formatEnd) > 2)
		_strcpy(format, formatEnd + 2);

	free(formatEnd);
	return (format);
}
