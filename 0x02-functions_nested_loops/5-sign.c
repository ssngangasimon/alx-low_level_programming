#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number to check
 * Return: 1 for positive, -1 for negative, 0 otherwiss
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
