#include "main.h"

/**
 * set_bit - function sets a bit to 1
 * @n: number to change
 * @index: bit index
 *
 * Return: 1 if worked, -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
