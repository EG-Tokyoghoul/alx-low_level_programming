#include <stdio.h>
#include "lists.h"

/**
 *the  print_list -should  print all the elements of a linked lists
 * *h: pointer to the list_t list to print
 *
 * then it Return: the number of nodes print
 */
size_t print_list(const list_t *l)
{
	size_t s = 0;

	while (l)
	{
		if (!l->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", l->len, l->str);
		l = l->next;
		s++;
	}

	return (s);
}
