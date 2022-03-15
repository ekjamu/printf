#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
  * print_int - function to print int %i
  * @format: copy of format integer pointed to %i
  * @var: va_list pointer
  * Return: if integer is NULL, return pointer
  */
char *print_int(char *format, va_list *var)
{
	char *formatEnd;
	unsigned long int number = 0, i = 0;
	char printNum[20];
	char *convert = "0123456789";
	int initial_num;

	initial_num = va_arg(*var, unsigned long int);

	if (initial_num < 0)
		number = initial_num * -1;
	else
		number = initial_num;
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
	if (initial_num < 0)
	{
		*(printNum + i) = '-';
		i++;
	}
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
