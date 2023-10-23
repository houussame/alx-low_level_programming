#include"lists.h"

/**
 *print_listint - function that prints all the elements
 *@h:pointer to first node
 *
 *Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}
	return (a);
}
