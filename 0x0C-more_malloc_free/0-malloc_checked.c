#include"main.h"
#include<stdlib.h>
/**
  * malloc_checked - function that allocates memory using malloc
  * @b: return value
  * Return: int
  */
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);
	if (n == NULL)
	{
		exit(98);
	}
	else
	{
		return (n);
	}
}
