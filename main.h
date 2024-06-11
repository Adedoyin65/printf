#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
int _putchar(char c);
int _puts(const char *str);
int _print_int(int n);
int _print_binary(unsigned int n);
int _print_unsigned(unsigned int n);
int _print_octal(unsigned int n);
int _print_hex(unsigned int n, int uppercase);
int _print_pointer(void *p);
int _print_binary(unsigned int n);
int handle_specifier(char specifier, va_list args);
int _printf(const char *format, ...);

#endif
