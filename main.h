#ifndef MAIN_H
#define MAIN_H

/**
* struct forms - holds my selector and pointer to function
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

int _printf(const char *format, ...);
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
void *_memcpy(void *dest, void *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
char *_strdup(char *str);

#endif /* MAIN_H */
