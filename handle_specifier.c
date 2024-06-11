#include "main.h"
/**
 * handle_specifier - An handler of formats.
 * @specifier: The specifier.
 * @args: Arguments.
 * Return: An integer.
 */

int handle_specifier(char specifier, va_list args)
{
	int count = 0;

	switch (specifier)
	{
		case 'c':
		count += _putchar(va_arg(args, int));
		break;
		case 's':
		count += _puts(va_arg(args, char *));
		break;
		case 'd':
		case 'i':
		count += _print_int(va_arg(args, int));
		break;
		case 'u':
		count += _print_unsigned(va_arg(args, unsigned int));
		break;
		case 'o':
		count += _print_octal(va_arg(args, unsigned int));
		break;
		case 'x':
		count += _print_hex(va_arg(args, unsigned int), 0);
		break;
		case 'X':
		count += _print_hex(va_arg(args, unsigned int), 1);
		break;
		case 'p':
		count += _print_pointer(va_arg(args, void *));
		break;
		case 'b':
		count += _print_binary(va_arg(args, unsigned int));
		break;
		case '%':
		count += _putchar('%');
		break;
		default:
		count += _putchar('%');
		count += _putchar(specifier);
		break;
	}
	return (count);
}
