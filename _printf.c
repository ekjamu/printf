#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * print_mod - will search for the required modifier function
 * @format: the string we want manipulate
 * @var: the list to search from
 * Description: long description
 *
 * Return: the pointer to the string after the modification has occured
 */

char *print_mod(char *format, va_list *var)
{
	unsigned int count = 0;
	char modFound = *(format + 1);
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

	while (selector[count].symbol != NULL)
	{
		if (*(selector[count].symbol) == *(format + 1))
		{
			return (selector[count].type(format, var));
		}
		count++;
	}
	_puts("Error: incorrect Modifier %");
	_putchar(modFound);
	_putchar('\n');
	exit(99);
}

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
	unsigned int i = 0;
	char *formatCpy;
	int buffSize;

	/* the next three lines will allocate space
	   and copy the original string to a new
	   location on the heap for us to manipulate */
	buffSize = _strlen(format);
	formatCpy = malloc(buffSize + 1000);
	_strcpy(formatCpy, format);
	va_start(print, format);
	/* These loops will find the modifier character and will
	 send to the print_mod function to do the heavy lifting.*/
	while (formatCpy != NULL && (*(formatCpy + i)) != '\0')
	{
		if (*(formatCpy + i) == '%')
		{
			formatCpy = print_mod(formatCpy, &print);
		}
		i++;
	}
	va_end(print);
	buffSize = _strlen(formatCpy);
	write(1, &formatCpy, buffSize);
	free(formatCpy);
	return (buffSize);
}
