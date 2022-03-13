#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#include <stdlib.h>

/**
* buff_sixteen - calcs the size needed for the buffer
* @args: pointer to the list_item we need to print
* Description: this seems redudant but the main use here
* is to remove the top element of the list.
* will use this function to allow use of flags.
* Return: will return a blank 4 for now.
*/
int buff_sixteen(va_list *args)
{
        int c;

	c = va_arg(*args, int);
	return (4);
}
