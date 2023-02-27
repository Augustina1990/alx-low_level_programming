#include "main.h"
/**
*_puts - prints a string
*@str: A pointer to an int that will be changed
*
*Return: void which means our answer is correct
*/

void _puts(char *str)
{
char *a;
int m;

a = str;

for (m = 0; a[m]; m++)
{
_putchar (a[m]);
}
_putchar('\n');
}
