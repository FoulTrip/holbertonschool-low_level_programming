#include "main.h"
/**
 * jack_bauer -  prints every minute of the day
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int hrs, mnts;

	for (hrs = 00; hrs <= 23; hrs++)
	{
		for (mnts == 00;mnts < 23; mnts++)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((mnts / 10) + '0');
			_putchar((mnts / 10) + '0');
			_putchar('\n');
		}	       
	}
}
