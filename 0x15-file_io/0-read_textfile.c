#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - to read a text file and print it to the output
 * @filename: text file been read
 * @letters: number of letters to be read
 *
 * Return: the actual number it could read and
 * 0 if functions fails or file name is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t w;
	ssize_t r;

	fd = open(filename, O_RDONLY);
	if (fd ==  -1)
		return (0);

	buffer = (char *) malloc(sizeof(char) * letters);
	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(fd);
	return (w);
}
