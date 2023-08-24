#include"lists.h"
/**
  * print_list - prints all elements of list
  * @h: pointer to list_t list
  * Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
			h = h->next;
			i++;
	}
	return (i);
}
