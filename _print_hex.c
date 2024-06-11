#include "main.h"

/**
 * _print_hex - A function that print an unsigned integer in hexadecimal.
 * @n: An integer.
 * @uppercase: An integer.
 * Return: An integer.
 */

int _print_hex(unsigned int n, int uppercase)
{
	char buffer[9];
	int i = 0, count = 0;
	char base = uppercase ? 'A' : 'a';

	if (n == 0)
	{
		return (_putchar('0'));
	}

	while (n > 0)
	{
		int digit = n % 16;

		if (digit < 10)
		{
			buffer[i++] = digit + '0';
		}
		else
		{
			buffer[i++] = digit - 10 + base;
		}
		n /= 16;
	}

	while (i > 0)
	{
		count += _putchar(buffer[--i]);
	}

	return (count);
}
