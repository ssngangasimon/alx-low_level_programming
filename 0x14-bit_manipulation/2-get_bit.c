#include "main.h"

/**
 * get_bit - function that returns value of a bit
 * @n: number
 * @index: bit index
 *
 * Return: value of bit index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
