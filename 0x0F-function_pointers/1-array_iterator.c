#include"function_pointers.h"
/**
 * array_iterator - function that executes a function
 * @size: size of the array
 * @action: pointer to the function to use
 * @array: array of elements
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
