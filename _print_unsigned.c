#include "main.h"

/**
 * _print_unsigned - A function that print an unsigned integer.
 * @n: An integer
 * Return: An integer.
 */

int _print_unsigned(unsigned int n)
{
	char buffer[11];
	int i = 0, count = 0;

	if (n == 0)
	{
		return (_putchar('0'));
	}

	while (n > 0)
	{
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	}

	while (i > 0)
	{
		count += _putchar(buffer[--i]);
	}

	return (count);
}
