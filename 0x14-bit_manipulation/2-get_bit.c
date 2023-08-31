#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index
 * @index: index of the bit you want to get
 * @n: integer value
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1); /* Error: index out of bounds*/
	}

	mask = 1UL << index;

	if (n & mask)
	{
		return (1);/*Bit is set*/
	}
	else
	{
		return (0); /*Bit is not set*/
	}
}
