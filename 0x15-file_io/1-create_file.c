#include "main.h"

/**
 * create_file - function to creates file
 * @filename: file to create
 * @text_content: to string to write to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fe, u, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fe = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	u = write(fe, text_content, len);

	if (fe == -1 || u == -1)
		return (-1);

	close(fe);

	return (1);
}
