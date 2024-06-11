#include "main.h"

/**
 * _putchar - A function to output a single character.
 * @c: The character.
 * Return: An integer.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
