#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#include <stdlib.h>

/**
* buff_eight - calcs the size needed for the buffer
* @args: pointer to the list_item we need to print
* Description: this seems redudant but the main use here
* is to remove the top element of the list.
* will use this funtion to handle flags if needed.
* Return: add in what is supposed to be returned if anything
*/
int buff_eight(va_list *args)
{
        int c;

	c = va_arg(*args, int);
	return (4);
}
