#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: the integer to be operated on
 * @index: the index
 * Return: returns the value of the bit at index or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1); /* Error: index out of bounds */
	}

	mask = 1UL << index;

	if (n & mask)
	{
		return (1);  /* Bit is set */
	}
	else
	{
		return (0); /* Bit is not set */
	}
}
