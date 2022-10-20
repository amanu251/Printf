#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct buffer
{
	char *ch;
	int (*f)(va_list);
} buffer_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);

#endif  /* MAIN_H */
