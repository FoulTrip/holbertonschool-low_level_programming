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
	/* we take two parameters: a and b. We compare if "a" 
	   is equal to the square of "b", if so, we return "b", 
           which means that "b" is the square root of "a". 
	   If the square of b is greater than or equal to "a", we return -1.*/
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
	/* The function "_sqrt_recursion" takes a number "n" as a parameter. 
            If "n" is less than or equal to 0, it returns -1. Otherwise, it calls 
	    "copy_sqrt_recursion" with the values "n" and 0, which starts the 
            recursive process to find the square root of "n". */
	if (n <= 0)
		return (-1);
	return (copy_sqrt_recursion(n, 0));
}
