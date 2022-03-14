#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#include <stdlib.h>

/**
  * print_eight - function to print to base 8
  * @format: base8
  * Return: if argument is NULL, return pointer
  */
char *print_eight(char *format, va_list *var)
{
	char *formatEnd, argStr[20];
	unsigned int number = 0;
	int printNum[20], i = 0, k = 0;

	number = va_arg(*var, unsigned int);

	/* perhaps we should exit here instead as printf wouldn't compile */
	formatEnd = malloc(sizeof(*formatEnd) * (_strlen(format) + 1));
	if (formatEnd == NULL)
		return (format);
	if (number < 0)
	{
		number = number * -1;
		argStr[k] = '-';
		k++;
	}
	while (number > 7)
	{
		printNum[i] = number % 8;
		i++;
		number = number / 8;
	}
	printNum[i] = number;
	while (i >= 0)
	{
		argStr[k] = (printNum[i] + '0');
		i--;
		k++;
	}
	argStr[k] = '\0';
	_strcpy(formatEnd, format);
	_strcpy(format, argStr);

	format = format + _strlen(argStr);

	if (_strlen(formatEnd) > 2)
		_strcpy(format, formatEnd + 2);

	free(formatEnd);
	return (format);
}
