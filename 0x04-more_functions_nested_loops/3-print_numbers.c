#include "main.h"
/**
 * print - Numbers 0 to 9 followed by new line
 *
 * Return: prints the numbers 0 to 9 on a single line,followed by a new line.
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}
