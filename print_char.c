#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
  * print_char - function to print char %c
  * @format: copy of format char pointed to %c
  * @format: the string character to manipulate
  * @var: the list to manipulate.
  * Return: if char is NULL, return pointer
  */
char *print_char(char *format, va_list *var)
{
	char *formatEnd;

	formatEnd = malloc(sizeof(*formatEnd) * (_strlen(format) + 1));
	if (formatEnd == NULL)
		return (NULL);
	_strcpy(formatEnd, format);
	*format = va_arg(*var, int);

	format = format + 1;
	if (_strlen(formatEnd) > 2)
		_strcpy(format, formatEnd + 2);

	free(formatEnd);
	return (format);
}
