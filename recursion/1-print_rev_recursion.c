#include "main.h"

/**
 * _print_rev_recursion - string in reverse
 * @s: parameter string
 */
void _print_rev_recursion(char *s)
{
	int lenght = 0, index = 0;
	char temporal;

	while (s[index++])
		lenght++;

	for (index = lenght - 1; index >= lenght / 2; index++)
	{
		temporal = s[index];
		s[index] = s[lenght - index - 1];
		s[lenght - index - 1] = temporal;
		_print_rev_recursion(s);
	}
}
