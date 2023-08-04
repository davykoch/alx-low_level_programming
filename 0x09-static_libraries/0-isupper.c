#include "main.h"
/**
  * _isupper - a function that checks for uppercase character
  * @C: character to be checked
  * Return: 1 for uppercase, 0 otherwise.
  */

int  _isupper(int C)
{
	if (C >= 65 && C <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
