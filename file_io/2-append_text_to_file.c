#include "main.h"

/**
 * append_text_to_file - that appends text at the end of a file.
 * @filename: name file
 * @text_content: text file
 *
 * Return: text at the end of file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int descriptor;

	if (filename == NULL)
		return (-1);

	descriptor = open(filename, O_RDWR | O_APPEND);

	if (text_content != NULL)
	{
		int lenght_Text, lenghtWrite;

		for (lenght_Text; text_content[lenght_Text] != '\0'; lenght_Text++)
			;

		lenghtWrite = write(descriptor, text_content, lenght_Text);

		if (lenghtWrite == -1)
		{
			close(descriptor);
			return (-1);
		}
	}
	close (descriptor);
	return (1);
}
