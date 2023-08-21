#include "main.h"
/**
 * _puts - print a string
 * @str: string to print
 * Return: string and a new line
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
