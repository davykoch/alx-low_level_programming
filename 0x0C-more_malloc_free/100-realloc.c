#include"main.h"
#include<stdlib.h>
/**
  * _realloc -  function that reallocates a memory block
  * @ptr: pointer to previous memory
  * @old_size: size of allocated space for ptr
  * @new_size: new size of new memory block
  * Return: newly allocated memory space
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *realloc;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	realloc = malloc(new_size);
	if (realloc == NULL)
		return (NULL);
	if (ptr == NULL)
	{
		for (i = 0; i < old_size && i < new_size; i++)
		{
			realloc[i] = ((char *)ptr)[i];
		}
		free(ptr);
	}
	return (realloc);
}
