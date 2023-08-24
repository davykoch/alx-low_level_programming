#include"lists.h"

/**
  * list_len - returns the number of elements in a linked lists
  * @h: linked list
  * Return: number of elements
  */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			i++;
		h = h->next;
	}
	return (i);
}
