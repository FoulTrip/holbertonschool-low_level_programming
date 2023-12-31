#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Sum two numbers
 * @a: first number
 * @b: second number
 *
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtract two numbers
 * @a: first number
 * @b: second number
 *
 * Return: The subtract of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply two numbers
 * @a: first number
 * @b: second number
 *
 * Return: The subtract of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Multiply two numbers
 * @a: first number
 * @b: second number
 *
 * Return: The quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder two numbers
 * @a: first number
 * @b: second number
 *
 * Return: The remainder of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
