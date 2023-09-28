#include "main.h"

/**
 * clear_bit - Clears the value of a bit at a given index.
 * @n: Pointer to the number to be operated on.
 * @index: The index of the bit to be cleared.
 * Return: 1 (Success) or -1 (Error).
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);  /* Index out of bounds. */

	mask = 1UL << index;

	*n = (*n & ~mask);

	return (1);
}
