#include "main.h"

/**
 * append_text_to_file - function that appends text at end of file
 * @filename: to filename
 * @text_content: string to add to file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, u, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	u = write(o, text_content, len);

	if (o == -1 || u == -1)
		return (-1);

	close(o);

	return (1);
}
