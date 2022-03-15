#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
* struct modifier - holds my selector and pointer to function
* @symbol: selector type, %s=string, %c=char, %f=float, %i=integer etc.
* @type: pointer to function to print statement
*
* Description:
*/
typedef struct modifier
{
char *symbol;
char *(*type)(char*, va_list *);
} t_mod;

/**
* struct buffer_calc - data struct to help with buffer calc
* @symbol: selector type, %s=string, %c=char, %f=float, %i=integer etc.
* @type: pointer to function to calc specific data types
*
* Description:
*/
typedef struct buffer_calc
{
char *symbol;
int (*type)(va_list *);
} t_buff;

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(const char *s);
void _puts(char *s);
char *_strcpy(char *dest, const char *src);
char *_strcat(char *dest, char *src);
char *print_u_sixteen(char *format, va_list *var);
char *print_char(char *format, va_list *var);
char *print_int(char *format, va_list *var);
char *print_string(char *format, va_list *var);
char *print_percent(char *format, va_list *var);
char *print_eight(char *format, va_list *var);
char *print_sixteen(char *format, va_list *var);
char *print_ptr(char *format, va_list *var);
char *print_mod(char *format, va_list *var);
char *print_uns(char *format, va_list *var);
char *print_binary(char *format, va_list *var);
char *print_reverse(char *format, va_list *var);
int buff_size_calc(const char *format, va_list *args);
int buff_string(va_list *args);
int buff_char(va_list *args);
int buff_int(va_list *args);
int buff_eight(va_list *args);
int buff_sixteen(va_list *args);
int buff_ptr(va_list *args);
void rev_string(char *s);
char *remove_char(char *format);
char *print_rot(char *format, va_list *var);

#endif /* MAIN_H */
