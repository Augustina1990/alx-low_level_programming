#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always o (Success)
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++);
	{
		_putchar (alph);
	}
	_putchar (`\n`);

	return (0);
}
