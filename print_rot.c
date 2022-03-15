#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
  * print_rot - function to convert a string encoded by rot13
  * @format: copy of format string pointed to %s
  * @var: va_list pointer
  * Return: if string is NULL, return pointer
  */
char *print_rot(char *format, va_list *var)
{
	char *formatEnd, *argStr;
	char *alpha = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char *code = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
	int i, j = 0;

	argStr = va_arg(*var, char *);
	if (argStr == NULL || *argStr == '\0')
		return (NULL);

	formatEnd = malloc(sizeof(*formatEnd) * (_strlen(format) + 1));
	if (formatEnd == NULL)
		return (NULL);
	_strcpy(formatEnd, format);

	while (argStr[j] != '\0')
	{
		i = 0;
		while (alpha[i] != '\0')
		{
			if (argStr[j] == alpha[i])
			{
				format[j] = code[i];
				break;
			}
			i++;
		}
		j++;
	}
	format = format + _strlen(argStr);
	if (_strlen(formatEnd) > 2)
		_strcpy(format, formatEnd + 2);
	else
		*format = '\0';
	free(formatEnd);
	return (format);
}
