#include <stdio.h>

/**
 * main: This prints "_putchar" followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char abc[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		putchar(abc[c]);
	}
        putchar('\n');
	return (0);
}
