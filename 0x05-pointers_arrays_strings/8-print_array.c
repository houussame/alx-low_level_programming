#include "main.h"

/**
 *print_array - a function that prints n elements 
 *		of an array of integers
 *@n: elements
 *@a: string
 *Return: Always 0
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d ", a[i]);
	}
	printf("\n");
}
