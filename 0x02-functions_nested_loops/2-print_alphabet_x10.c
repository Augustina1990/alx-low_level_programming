#include "main.h"

/**
 * print_alphabet_×10 - prints the alphabet 10 times, followed by a new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	i = 0;

	for (i = 0; i < 10; i++)
	{
		char c;
		c = 'a';

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');
	}

}
