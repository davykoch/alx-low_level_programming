#include"main.h"
#include<stdlib.h>
/**
  * _calloc - function that allocates memory for an array, using malloc
  * @nmemb: array elements
  * @size: element size
  * Return: pointer to the allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i, n;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	n = nmemb * size;
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		p[i] = 0;
	return (p);
}
