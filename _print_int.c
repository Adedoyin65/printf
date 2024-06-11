#include "main.h"

/**
 * _print_int - A function that print a signed integer.
 * @n: An integer.
 * Return: A signed integer.
 */

int _print_int(int n)
{
	char buffer[12];
	int i = 0, count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		n = -n;
	}
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
