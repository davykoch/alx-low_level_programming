#include "main.h"
/**
 * int binary_to_uint -  converts a binary number to an unsigned int.
 * @b: points to a string of 0 and 1 chars
 * Return:  the converted number
 * or 0 if there is one or more chars in the string b that is not 0 or 1
 * or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int bit_value = 1;
	int i, length = 0;

	if (!b)
	{
		return (0);
	}

	while (b[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result += (b[i] - '0') * bit_value;
			bit_value <<= 1;
		}
		else
		{
			return (0);/*Invalid character encountered*/
		}
	}
	return (result);
}
