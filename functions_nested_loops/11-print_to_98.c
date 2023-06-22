/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: initial count
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	while (n <= 98)
		_putchar((n % 10) + '0');
	        _putchar(',');
		_putchar(' ');
		n++;

	_putchar('\n');

	return (0);
}
