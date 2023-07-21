#include "function_pointers.h"

/**
 * printf_name - prints a name.
 * @name: input name
 * @f: print name
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != 0 && name != 0)
		f(name);
}
