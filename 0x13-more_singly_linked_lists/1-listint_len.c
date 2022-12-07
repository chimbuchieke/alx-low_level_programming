#include "lists.h"

/**
<<<<<<< HEAD
 * listint_len - returns the number of elements in a linked list.
 * @h: head of a list
 * Return: numbers of nodes.
=======
 * listint_len -mreturns the number of element in a linked list
 * @h: head of list
 * Return: number of nodes
>>>>>>> 7f7019655ccee7e34f77a609efdc24786a397956
 */
size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;
<<<<<<< HEAD
	
=======

>>>>>>> 7f7019655ccee7e34f77a609efdc24786a397956
	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
