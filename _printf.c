#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _printf - will duplicate the printf function
 * @format: the string we want manipulate
 * Description: long description
 *
 * Return: count of the length printed to screen
 */

int _printf(const char *format, ...)
{
/*	this will be our super awesome function!!*/
	va_list print;
	unsigned int i = 0, count = 0;
	char *formatCpy;
	int length;
	t_mod selector[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_int},
		{"f", print_float},
		{"o", print_eight},
		{"x", print_sixteen},
		{NULL, NULL}
	};

	length = _strlen(format);
	formatCpy = malloc(length + 1);
	_strcpy(formatCpy, format);
	va_start(print, format);
	while (formatCpy != NULL && (*(formatCpy + i)) != '\0')
	{
		count = 0;
		while (selector[count].symbol != NULL)
		{
			if (*(selector[count].symbol) == *(formatCpy + i))
			{
				if (*(formatCpy + i - 1) == '%')
				{
					printf("found %%%c\n", *(formatCpy + i));
				}
			}
			count++;
		}
		i++;
	}
	va_end(print);
	putchar('\n');
	length = _strlen(formatCpy);
	free(formatCpy);
	return (length);
}
