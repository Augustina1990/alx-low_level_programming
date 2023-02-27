#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: points to the first integer
 * @b: points to the second integer
 * Return: always 0 (success)
 */

void swap_int(int *a, int *b)
{
	int h;
	h = *a;
	*a = *b;
	*b = h;
}
