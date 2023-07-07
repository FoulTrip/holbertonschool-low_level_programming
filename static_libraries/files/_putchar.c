#include <unistd.h>

/**
 * _putchar - write the characters
 * @c: character print
 *
 * Return: On sucess 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
