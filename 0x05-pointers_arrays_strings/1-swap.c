#include "main.h"

/**
 *swap_int -  a function that swaps the values of two integers
 *
 *@a: integer to swap
 *@b: integer to swap
 *Return: nothing
*/

void swap_int(int *a, int *b)
{
	int ho;

	ho = *a;
	*a = *b;
	*b = ho;
}
