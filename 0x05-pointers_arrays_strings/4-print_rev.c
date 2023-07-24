#include"main.h"

/**
  * print_rev - prints string in reverse, followed by a new line
  * @s: string characters printed in reverse
  * Return: void
  */

void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;

	while (len > 0)
	{
		_putchar(*s);
		s--;
		len--;
	}
	_putchar('\n');
}
