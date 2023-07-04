#include "main.h"

/**
 * prime_verify - we check if "n" is prime
 * @number: value to be verified
 * @divisor: value divisor
 *
 * Return: prime
 */
int prime_verify(int number, int divisor)
{
	if (number % divisor == 0)
		return (0);

	if (divisor == number / 2)
		return (1);

	return (prime_verify(number, divisor + 1));
}

/**
 * is_prime_number -  input integer is a prime number
 * @n: init value
 *
 * Return: prime
 */
int is_prime_number(int n)
{
	int divisor = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (prime_verify(n, divisor));
}
