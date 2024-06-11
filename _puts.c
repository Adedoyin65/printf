#include "main.h"

/**
 * _puts - A function to output a string.
 * @str: A pointer to character.
 * Return: An integer.
 */

int _puts(const char *str)
{
	int count = 0;

	while (*str)
	{
		count += _putchar(*str++);
	}
	return (count);
}
