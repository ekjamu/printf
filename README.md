# The PRINTF project
## A Holberton Foundations Project

**Language: C**

This program writes a format string to standard output (a recreation of the stdio.h's printf()).

We've taken an alternative approach to printing the format string, generating a space in memory to hold the entire modified string (see buff_size and associated subroutines), copying the format string into the newly allocaetd space and progressively manipulating it as each format specifier is encountered actioned (see print_mod inside _printf.c and subroutines). Once the format string copy is ready for printing, it is printed to standard output by one call to write and returns the length of the output string or -1 if an error is encountered at any part of the process.

The program has been tested in an Ubuntu 20.04 LTS environment and is compliant with gcc compilation using flags -Wall -Werror -Wextra -pedantic -std=gnu89.

**Format Specifiers**

The following format specifiers are possible (NB some format specifiers are custom and do not match the printf() functionanlity):

%c - print a char
%s - print a string
%d & %i - print an integer as base 10
%% - print a percent sign
%b - print unsigned integer in base 2
%o - print unsigned integer in base 8
%x & %X - print integer & unsigned integer in base 16 (x = lowercase alpha chars, X = uppercase alpha chars)
%u - print unsigned integer as unsigned base 10
%p - print address in memory
%r - print a string in reverse

As mentioned above, calls to modifier functions are made in the print_mod() function, found inside _printf.c.

### Contributors: Matthew Brinkman, Cienna (Nhi) Nguyen and Karoline Silva
