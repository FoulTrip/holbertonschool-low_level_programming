#include "main.h"
/**
 * _isupper - checks for uppercase character.
 * @c: parameter for function
 */
int _issupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}