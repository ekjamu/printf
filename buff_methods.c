#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#include <stdlib.h>

/**
* buff_char - calcs the size needed for the buffer
* @args: pointer to the list_item we need to print
* Description: this seems redudant but the main use here
* is to remove the top element of the list.
* Return: add in what is supposed to be returned if anything
*/
int buff_char(va_list *args)
{
	char c;

	c = va_arg(*args, int);
	if (c == '\0')
		return (0);
	return (1);
}


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
	int c, buffSize = 1;

	c = va_arg(*args, int);
	if (c < 0)
	{
		/**
		 * change the negative to positive and
		 * add 1 to buffSize to allow for - sign
		 */
		c = c * -1;
		buffSize++;
	}
	while (c > 7)
	{
		c = c / 8;
		buffSize++;
	}

	return (buffSize);
}


/**
 * buff_int - calcs size needed for the buffer
 * @args: pointer to the list_item we need to calc
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
int buff_int(va_list *args)
{
	int c, buffSize = 1;

	c = va_arg(*args, int);
	if (c < 0)
	{
		/**
		 * change the negative to positive and
		 * add 1 to buffSize to allow for - sign
		 */
		c = c * -1;
		buffSize++;
	}
	while (c > 9)
	{
		c = c / 10;
		buffSize++;
	}

	return (buffSize);
}


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



/**
* buff_sixteen - calcs the size needed for the buffer
* @args: pointer to the list_item we need to print
* Description:
*
* Return: will return a blank 4 for now.
*/
int buff_sixteen(va_list *args)
{
	int c, buffSize = 1;

	c = va_arg(*args, int);
	if (c < 0)
	{
		/**
		 * change the negative to positive and
		 * add 1 to buffSize to allow for - sign
		 */
		c = c * -1;
		buffSize++;
	}
	while (c > 15)
	{
		c = c / 16;
		buffSize++;
	}

	return (buffSize);
}


/**
 * buff_size_calc - calcs the maximum size needed for the buffer
 * @format: the type of data we need
 * @args: pointer to the list for the printf
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
int buff_size_calc(const char *format, va_list *args)
{
	int i = 0, count = 0, k = 0;
	int buffSize = 0;
	t_buff selector[] = {
		{"c", buff_char}, {"s", buff_string},
		{"d", buff_int}, {"i", buff_int},
		{"o", buff_eight}, {"x", buff_sixteen},
		{"X", buff_sixteen}, {"u", buff_int},
		{"p", buff_ptr}, {"r", buff_string},
		{NULL, NULL}
	};

	buffSize = _strlen(format);
	while (format != NULL && (*(format + i)) != '\0')
	{
		count = 0;
		while (selector[count].symbol != NULL)
		{
			k = i + 1;
			if ((*(format + i) == '%') && (*(format + k) == '%'))
			{
				buffSize++;
				i++;
				break;
			}
			if (*(selector[count].symbol) == *(format + i))
			{
				k = i - 1;
				if (*(format + k) == '%')
				buffSize = buffSize +
					selector[count].type(args);
			}
			count++;
		}
		i++;
	}
	return (buffSize);
}


/**
 * buff_string - calcs the size of a string
 * @args: pointer to the list_item calc the size of
 * Description: long description
 *
 * Return: the size of the string in bytes
 */
int buff_string(va_list *args)
{
	char *c;
	int buffAdd = 0;

	c = va_arg(*args, char *);
	if (c == NULL || *c == '\0')
		return (0);
	return (buffAdd = _strlen(c));
}
