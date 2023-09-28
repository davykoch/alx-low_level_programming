#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A string of binary digits.
 * Return: The converted unsigned int, or 0 if invalid input.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int bit_value = 1;
	int i;
	int length = 0;

	if (!b)
		return (0);

	while (b[length] != '\0')
		length++;

	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result += (b[i] - '0') * bit_value;
			bit_value <<= 1;
		}
		else
		{
			/*Invalid character encountered*/
			return (0);
		}
	}

	return (result);
}
