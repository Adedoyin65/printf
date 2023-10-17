#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - A function that produces output according to a format.
 * @format: is a character string.
 * Return: Returns a value.
 */
int _printf(const char *format, ...)
{
	va_list p;
	int char_count = 0;

	va_start(p, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			putchar(*format);
			char_count++;
		}
		switch (*++format)
			{
			case 'c':
			char_count += vfprintf(stdout, "%c", p);
			break;
			case 's':
			char_count += vfprintf(stdout, "%s", p);
			break;
			case '%':
			char_count += vfprintf(stdout, "%%", p);
			break;
			case 'd':
			char_count += vfprintf(stdout, "%d", p);
			break;
			case 'i':
			char_count += vfprintf(stdout, "%i", p);
			break;
			default:
			putchar('%');
			putchar(*format);
			char_count += 2;
			break;
			}
			format++;
	}
	va_end(p);
	return (char_count);
}
