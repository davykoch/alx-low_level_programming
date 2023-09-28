#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number to be operated on.
 * @index: The index of the bit to be set.
 * Return: 1 (Success) or -1 (Error).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);  /* Index out of bounds. */

	mask = 1UL << index;
	*n = (*n | mask);

	return (1);
}
