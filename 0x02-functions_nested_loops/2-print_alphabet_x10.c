#include "main.h"


/**
 * print_alphabet_×10 - prints the alphabet in lowercase times 10
 *
 * Return: Always 0 (success)
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
