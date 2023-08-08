#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name file
 * @text_content: text of file
 *
 * Return: file
 */
int create_file(const char *filename, char *text_content)
{
	int descriptor;

	if (filename == NULL)
		return (-1);

	descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		int lengthWrite, lengthText;

		for (lengthText = 0; text_content[lengthText] != '\0'; lengthText++)
			;
		lengthWrite = write(descriptor, text_content, (lengthText));

		if (lengthWrite == -1)
		{
			close(descriptor);
			return (-1);
		}
	}

	close(descriptor);

	return (1);
}
