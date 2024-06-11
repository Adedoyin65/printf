#include "main.h"

/**
 * _print_pointer - A function that print a pointer.
 * @p: A pointer.
 * Return: An integer.
 */

int _print_pointer(void *p)
{
	char buffer[17];
	int i = 0, count = 0;
	unsigned long addr = (unsigned long)p;

	count += _puts("0x");

	if (addr == 0)
	{
		return (count + _putchar('0'));
	}

	while (addr > 0)
	{
		int digit = addr % 16;

		if (digit < 10)
		{
			buffer[i++] = digit + '0';
		}
		else
		{
			buffer[i++] = digit - 10 + 'a';
		}
		addr /= 16;
	}

	while (i > 0)
	{
		count += _putchar(buffer[--i]);
	}
	return (count);
}
