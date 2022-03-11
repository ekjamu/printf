#include "main.h"

/**
 * _puts - short description
 * @str: the string we want to display
 * Description: long description
 *
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
