#include"function_pointers.h"
/**
  * int_index - function that searches for an integer
  * @size: number of elements in the array
  * @cmp: pointer to the function to be used to compare values
  * @array: array of the integers
  * Return: -1 if no elements matches or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i <= size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
