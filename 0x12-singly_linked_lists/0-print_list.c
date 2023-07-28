#include <stdio.h>
#include "lists.h"

/**
 *the  print_list -should  print all the elements of a linked lists
 * *h: pointer to the list_t list to print
 *
 * then it Return: the number of nodes print
 */
ize_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
