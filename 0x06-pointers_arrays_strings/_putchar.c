#include <unistd.h>
/**
 * _putchar - print character to c stdout
 * @c: char to print
 *
 * Return: 1 On Success, -1 On Error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
