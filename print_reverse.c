#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_reverse - function to print string in reverse %r
 * @format: copy of format reverse pointed to %r
 * @var: va_list pointer
 * Return: if string is NULL, return pointer
 */
char *print_reverse(char *format, va_list *var)
{
	char *formatEnd, *argStr, *str;

	argStr = va_arg(*var, char *);

	if (argStr == NULL || *argStr == '\0')
		return (NULL);

	str = malloc(sizeof(*argStr) * (_strlen(argStr) + 1));
	if (str == NULL)
		return (NULL);
	_strcpy(str, argStr);
	rev_string(str);

	formatEnd = malloc(sizeof(*formatEnd) * (_strlen(format) + 1));
	if (formatEnd == NULL)
		return (NULL);

	_strcpy(formatEnd, format);
	_strcpy(format, str);

	format = format + _strlen(str);

	if (_strlen(formatEnd) > 2)
		_strcpy(format, formatEnd + 2);

	free(formatEnd);
	return (format);
}
