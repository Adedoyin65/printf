#include "main.h"

/**
 * _print_octal - A function that print an unsigned integer in octal.
 * @n: An integer.
 * Return: An octal representation.
 */

int _print_octal(unsigned int n)
{
	char buffer[12];
	int i = 0, count = 0;

	if (n == 0)
	{
		return (_putchar('0'));
	}

	while (n > 0)
	{
		buffer[i++] = (n % 8) + '0';
		n /= 8;
	}

	while (i > 0)
	{
		count += _putchar(buffer[--i]);
	}

	return (count);
}
