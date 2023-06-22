#include "main.h"
#include <stdio.h>
/**
 * jack_bauer -  prints every minute of the day
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int hrs;
	int mnts;

	for (mnts = 00; mnts < 60; mnts++)
	{
		if (mnts == 60)
		{
		       for (hrs == 00;hrs < 23; hrs++)
		       {
			       printf("%d:%d", hrs, mnts)
		       }	       
		}
	}
}
