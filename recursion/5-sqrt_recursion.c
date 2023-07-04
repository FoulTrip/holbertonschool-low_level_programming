#include "main.h"

/**
 * copy_sqrt_recursion - To perform a recursive binary search
 *
 * @a: The entry is equal to n
 * @b: This is the sum
 *
 * Return: Always 0.
 */
int copy_sqrt_recursion(int a, int b)
{
	if (a == (b * b))
		return (b);
	else if ((b * b) >= a)
		return (-1);
	else
		return (copy_sqrt_recursion(a, b + 1));
}

/**
 * _sqrt_recursion -  the natural square root of a number.
 * @n: value
 *
 * Return: This is result of the function copy_sqrt_recursion
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (copy_sqrt_recursion(n, 0));
}
