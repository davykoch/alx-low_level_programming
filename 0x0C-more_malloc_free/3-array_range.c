#include"main.h"
#include<stdlib.h>
/**
 *array_range - function that creates an array of integers
 * @max: maximum integer value
 * @min: minimum integer value
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, *p;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; min++, i++)
		p[i] = min;
	return (p);
}
