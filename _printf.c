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
	unsigned int i = 0, k = 0, count = 0;
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

	/* the next three lines will allocate space
	   and copy the original string to a new
	   location on the heap for us to manipulate */
	length = _strlen(format);
	formatCpy = malloc(length + 1);
	_strcpy(formatCpy, format);
	va_start(print, format);
	/* These loops will find the comifiers in the string
	   and send the string to the appropriate section */
	while (formatCpy != NULL && (*(formatCpy + i)) != '\0')
	{
		count = 0;
		while (selector[count].symbol != NULL)
		{
			if (*(selector[count].symbol) == *(formatCpy + i))
			{
				k = i - 1;
				if (*(formatCpy + k) == '%')
				{
					printf("%%%c\n", *(formatCpy + i));
					/*Un-comment this code to test our functions
					  selector[count].type
					  ((formatCpy + k), &print);*/
				}
			}
			count++;
		}
		i++;
	}
	va_end(print);
	_puts(formatCpy);
	putchar('\n');
	length = _strlen(formatCpy);
	free(formatCpy);
	return (length);
}
