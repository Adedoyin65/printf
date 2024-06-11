#include "main.h"
/**
 * print_custom_string - A function to handle custom string printing.
 * @str: The string to print.
 * Return: An integer.
 */
int print_custom_string(char *str)
{
    int count = 0;

    while (*str)
    {
        if (*str < 32 || *str >= 127)
        {
		char hex[3];
		
		count += _puts("\\x");
		snprintf(hex, sizeof(hex), "%02X", *str);
		count += _puts(hex);
        }
        else
        {
            count += _putchar(*str);
        }
        str++;
    }
    return count;
}
