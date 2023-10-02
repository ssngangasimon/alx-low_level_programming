#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- read textfile and print it
 * @filename: textfile
 * @letters: letters to read
 * Return: u- actual number of letters, 0 if NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fe;
	ssize_t u;
	ssize_t s;

	fe = open(filename, O_RDONLY);
	if (fe == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	s = read(fe, buff, letters);
	u = write(STDOUT_FILENO, buff, s);

	free(buff);
	close(fe);
	return (u);
}
