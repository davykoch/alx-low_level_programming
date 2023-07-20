#include "main.h"
/**
  * _isdigit - Function to check digits(0-9)
  * @y: digit to be checked
  * Return: 1 if y is a digit, 0 otherwise.
  */

int _isdigit(int y)
{
	if (y >= 48 && y <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

