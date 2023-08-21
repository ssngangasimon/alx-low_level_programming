#include "main.h"
/**
 * print_rev - print in reverse
 * @s: string
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int gear = 0;
	int o;

	while (*s != '\0')
	{
		gear++;
		s++;
	}
	s--;
	for (o = gear; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
