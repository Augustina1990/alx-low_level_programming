#include <stdio.h>
#include "main.h"

/**
 * main: This prints "_putchar" followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a[] = "_putchar";

	int i;

	for (i = 0; a[i]; i++)
	{
		putchar(a[i]);
	}

        putchar('\n');


	return (0);

}
