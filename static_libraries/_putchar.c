#include <unistd.h>

/**
 * _putchar.c - write the characters
 * @c: character print
 *
 * Return: On succes 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
