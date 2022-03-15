#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
  * print_string - function to print string %s
  * @format: copy of format string pointed to %s
  * @var: va_list pointer
  * Return: if string is NULL, return pointer
  */
char *print_string(char *format, va_list *var)
{
	char *formatEnd, *argStr;

	argStr = va_arg(*var, char *);

	if (argStr == NULL || *argStr == '\0')
		return (NULL);

	formatEnd = malloc(sizeof(*formatEnd) * (_strlen(format) + 1));
	if (formatEnd == NULL)
		return (NULL);

	_strcpy(formatEnd, format);
	_strcpy(format, argStr);

	format = format + _strlen(argStr);

	if (_strlen(formatEnd) > 2)
		_strcpy(format, formatEnd + 2);

	free(formatEnd);

	return (format);
}
