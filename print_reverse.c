#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_reverse - function to print string in reverse %r
 * @format: copy of format reverse pointed to %r
 * @var: va_list pointer
 * Return" if string is NULL, return pointer
 */
char *print_reverse(char *format, va_list *var)
{
	char *formatEnd, *argStr;

	argStr = va_arg(*var, char *);
	printf("argStr is %s", argStr);

	if (argStr == NULL || *argStr == '\0')
		return (NULL);

	rev_string(argStr);
	printf("argStr is %s", argStr);

	formatEnd = malloc(sizeof(*formatEnd) * (_strlen(format) + 1));
	if (formatEnd == NULL)
		return (NULL);

	_strcpy(formatEnd, format);
	_strcpy(format, argStr);

	format = format + _strlen(argStr);

	if (_strlen(formatEnd) > 2)
		_strcpy(format, formatEnd + 2);

	free(formatEnd);
	return (argStr);
}
