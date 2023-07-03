#include "main.h"

/**
 * _print_rev_recursion - string in reverse
 * @s: parameter string
 */
void _print_rev_recursion(char *s)
{
	// Verificamos si "*s" no apunta al carácter nulo
	if (*s)
	{
		// Esto desplaza el puntero s al siguiente carácter en la cadena.
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
