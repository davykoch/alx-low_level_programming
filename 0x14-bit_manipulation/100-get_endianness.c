#include "main.h"

/**
 * get_endianness - checks the endianness of the machine.
 *
 * Return:
 * 1 for little endian (LSB stored at the lowest address)
 * 0 for big endian (MSB stored at the lowest address)
 *
 * Assumptions:
 * - An `unsigned int` is at least 2 bytes (16 bits).
 * - The byte order in memory is consistent with endianness.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	/* Check the value of the first byte. */
	/* If it's 1, the system is little endian; */
	/*  if it's 0, the system is big endian. */
	return (*c);
}
