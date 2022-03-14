#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
  * print_sixteen - function to print of base 16
  * @format: base16
  * Return: if argument is NULL, return pointer
  */
char *print_sixteen(char *format, va_list *var)
{
	char *formatEnd;
	unsigned int number = 0;
	char printNum[20], i = 0, k = 0;
	char *convert = "0123456789abcdef";
	number = va_arg(*var, unsigned int);

	/* perhaps we should exit here instead as printf wouldn't compile */
	formatEnd = malloc(sizeof(*formatEnd) * (_strlen(format) + 1));
	if (formatEnd == NULL)
		return (format);
	if (number < 0)
	{
		number = number * -1;
		printNum[i] = '-';
		i++;
	}
	while (number > 15)
	{
		printNum[i] = conver[number % 16];
		i++;
		number = number / 16;
	}
	printNum[i] = convert[number % 16];
	i++;
	printNum[i] = '\0';
	_strcpy(formatEnd, format);
	_strcpy(format, printNum);

	format = format + _strlen(printNum);

	if (_strlen(formatEnd) > 2)
		_strcpy(format, formatEnd + 2);

	free(formatEnd);
	return (format);
}
