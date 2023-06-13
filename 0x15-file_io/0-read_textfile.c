#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- This Reads the text file print to STDOUT.
 * @filename: This is the text file being read
 * @letters: The number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t ffd;
	ssize_t wd;
	ssize_t td;

	ffd = open(filename, O_RDONLY);
	if (ffd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	td = read(ffd, buff, letters);
	wd = write(STDOUT_FILENO, buff, td);

	free(buff);
	close(ffd);
	return (wd);
}
