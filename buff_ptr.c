#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#include <stdlib.h>

/**
* buff_ptr - calcs the size needed for the buffer
* @args: pointer to the list_item we need to print
* Description:
*
* Return: will return a blank 4 for now.
*/
int buff_ptr(va_list *args)
{
	unsigned long int c, buffSize = 1;

	c = va_arg(*args, unsigned long int);

	while (c > 15)
	{
		c = c / 16;
		buffSize++;
	}

	return (buffSize);
}
