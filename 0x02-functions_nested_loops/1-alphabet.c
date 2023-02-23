#include "main.h"

/**
 *prinit_alpabet - Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */

void print_alphabet(void);
int main()
{

	char alp = 'a';

        while (alp <= 'z')
       {
	     _putchar (alp);
                alp++;
        }
        _putchar ('\n');
  
}

