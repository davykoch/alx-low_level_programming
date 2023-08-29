#include "lists.h"

/**
  * listint_len -  returns the number of elements in a linked listint_t list.
  * @h: pointer to listint_t list.
  * Return: number of elements
  */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
