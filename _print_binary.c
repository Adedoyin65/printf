#include "main.h"

/**
 * _print_binary - A function that prints the binary rep of a number.
 * @n: An integer.
 * Return: Returns an integer.
 */

int _print_binary(unsigned int n)
{
	char buffer[32];
	int i = 0, count = 0;

	if (n == 0)
	{
		return (_putchar('0'));
	}
	while (n > 0)
	{
		buffer[i++] = (n % 2) + '0';
		n /= 2;
	}
	while (i > 0)
	{
		count += _putchar(buffer[--i]);
	}
	return (count);
}
