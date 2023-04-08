#include "main.h"

/**
 * create_file - function that create file
 * @filename: name of file to be created
 * @text_content: name of string to write to the file
 *
 * Return: if it fails --1
 * otherwise return -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, tent = 0;

		if (filename == NULL)
		{
			return (-1);
		}
		if (text_content != NULL)
		{
			while (text_content[tent] != '\0')
				tent++;
		}

		fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		w = write(fd, text_content, tent);

		if (fd == -1 || w == -1)
			return (-1);

		close(fd);

		return (1);
}

