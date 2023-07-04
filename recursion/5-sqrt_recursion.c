#include "main.h"

/**
 * _sqrt_recursion - natural square root of a number.
 * @n: parameter
 *
 * Return: natural square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return recursive_sqrt(n, 1, n);
}

int recursive_sqrt(int n, int start, int end)
{
	if (start > end)
		return (-1);

	int mid = (start + end) / 2;
	
	if (mid * mid == n)
		return (mid);

	if (mid * mid > n)
		return recursive_sqrt(n, start, mid - 1);

	return recursive_sqrt(n, mid + 1, end);
}
