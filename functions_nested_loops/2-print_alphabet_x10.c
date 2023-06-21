#include "main.h"
#include <unistd.h>
void print_alphabet_x10(void);

/**
 * main - prints 10 times the alphabet
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet_x10();
    return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet_x10(void)
{
	char letter;
	int number = 0;

	while (number <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}

		_putchar('\n');
		number ++;
	}
}
