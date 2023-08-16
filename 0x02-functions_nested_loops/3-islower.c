#include "main.h"

/**
 * _islower - check for lowercase char
 * @c: char to be checked
 * Return: 1 for lowercase char or otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
