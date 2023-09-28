#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: returns the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result > 0)
	{
		if (xor_result & 1)
		{
			c++;
		}
		xor_result >>= 1;
	}

	return (c);
}

