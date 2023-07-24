#include"main.h"
#include <stdio.h>

/**
  * swap_int - function that swaps values of two integers
  * @a: integer
  * @b: another integer
  * Return: void.
  */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
