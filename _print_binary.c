#include "main.h"

/**
 * _print_binary - A function that converts to binary.
 * @n: An integer.
 * Return: A binary representation.
 */

int _print_binary(unsigned int n)
{
	char buffer[33];
	int i = 0;
	int count = 0;

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
