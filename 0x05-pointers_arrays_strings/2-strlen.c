#include "main.h"
/**
 * _strlen - return length of string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int st_length = 0;

	while (*s != '\0')
	{
		st_length++;
		s++;
	}

	return (st_length);
}
