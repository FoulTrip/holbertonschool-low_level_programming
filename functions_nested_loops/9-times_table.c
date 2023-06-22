#include "main.h"

/**
 * times_table - function that prints the 9 times table
 */
void times_table(void)
{
	int numInit, numMUL, prod;

	for (numInit = 0; numInit <= 9; numInit++)
	{
		_putchar('0');

		for (numMUL = 1; numMUL <= 9; numMUL++)
		{
			_putchar(',');
			_putchar(' ');

			prod = numInit * numMUL;

			if (prod <= 9)
				_putchar('');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod / 10) + '0');

	        }
		_putchar('\n');
	}
}
