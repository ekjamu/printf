#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#include <stdlib.h>

/**
  * convert_hex - function to print of base 16
  * @number: number to convert to string in hex form
  * Return: if argument is NULL, return pointer
  */
char *convert_hex(unsigned long int number)
{
	char *printNum;
	int i = 0;
	char *convert = "0123456789abcdef";

	printNum = malloc(20);

	while (number > 15)
	{
		*(printNum + i) = *(convert + (number % 16));
		i++;
		number = number / 16;
	}
	*(printNum + i) = *(convert + (number % 16));
	i++;
	*(printNum + i) = 'x';
	i++;
	*(printNum + i) = '0';
	i++;
	*(printNum + i) = '\0';
	rev_string(printNum);
	return (printNum);
}

/**
  * print_ptr - function to print of base 16
  * @format: base16
  * @var: the list object to manipulate.
  * Return: if argument is NULL, return pointer
  */
char *print_ptr(char *format, va_list *var)
{
	char *formatEnd;
	unsigned long int number = 0;
	unsigned long int numberTest = 0, i = 0;
	char *printNum;
	char *convert = "0123456789abcdef";

	number = va_arg(*var, unsigned long int);
	numberTest = number;
	formatEnd = malloc(sizeof(*formatEnd) * (_strlen(format) + 1));
	if (formatEnd == NULL)
		return (format);
	if (numberTest == 0)
	{
		_strcpy(printNum, "(nil)");
		_strcpy(formatEnd, format);
		_strcpy(format, printNum);
		format = format + _strlen(printNum);
		if (_strlen(formatEnd) > 2)
			_strcpy(format, formatEnd + 2);
		free(formatEnd);
		return (format);
	}
	printNum = convert_hex(number);
	_strcpy(formatEnd, format);
	_strcpy(format, printNum);
	format = format + _strlen(printNum);
	if (_strlen(formatEnd) > 2)
		_strcpy(format, formatEnd + 2);
	free(formatEnd);

	return (format);
}
