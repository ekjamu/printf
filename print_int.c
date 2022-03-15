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
	int initial_num, flag = 1;

	initial_num = va_arg(*var, int);
	if (initial_num < 0)
		flag = -1;
	formatEnd = malloc(sizeof(*formatEnd) * (_strlen(format) + 1));
	if (formatEnd == NULL)
		return (-1);
	_strcpy(formatEnd, format);
	for (number = initial_num * flag; number > 9; i++)
	{
		*(printNum + i) = *(convert + (number % 10));
		number = number / 10;
	}
	*(printNum + i) = *(convert + (number));
	i++;
	if (flag == -1)
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
