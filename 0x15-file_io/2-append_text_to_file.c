#include "main.h"

/**
 * append_text_to_file - This Appends text at the end of a file.
 * @filename: This is A pointer to the name of the file.
 * @text_content: This is the string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int m, b, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	m = open(filename, O_WRONLY | O_APPEND);
	b = write(m, text_content, len);

	if (m == -1 || b == -1)
		return (-1);

	close(m);

	return (1);
}
