#include "main.h"

/**
 * append_text_to_file - function that appends text at end of file
 * @filename: name of file
 * @text_content: strings to be add at the end of file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, tent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (tent = 0; text_content[tent];)
			tent++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, tent);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
