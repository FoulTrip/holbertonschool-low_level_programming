#include "main.h"

/**
 * read_textfile - reads a text file and prints 
 *                 it to the POSIX standard output.
 * @filename: name of the file to open
 * @letters: bytes to read
 *
 * Return: number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int descriptor;
	char *buffer;
	int lengthRead, lengthWrite;

	if (filename == NULL)
		return (0);

	descriptor = open(filename, O_RDONLY);

	if (descriptor == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));

	if (buffer == NULL)
		return (0);

	lengthRead = read(descriptor, buffer, letters);

	lengthWrite = write(STDOUT_FILENO, buffer, lengthRead);

	if (lengthWrite != lengthRead && lengthWrite == -1)
		return (0);

	free(buffer);
	close(descriptor);
	return (lengthRead);

}

