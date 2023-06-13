#include "main.h"

/**
 * create_file - This Creates a file.
 * @filename: This is A pointer to the name of the file to create.
 * @text_content: This is A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int ffd, wn, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	ffd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wn = write(ffd, text_content, leng);

	if (ffd == -1 || wn == -1)
		return (-1);

	close(ffd);

	return (1);
}
