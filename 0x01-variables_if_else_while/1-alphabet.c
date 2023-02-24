#include "main.h"

void print_alphabet(void)

{
	char alp = 'a';
	  

	whila (alp <= 'z')

	{
		_putchar(alp);
	
                 alp++;
	}

	_putchar('\n');
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}
