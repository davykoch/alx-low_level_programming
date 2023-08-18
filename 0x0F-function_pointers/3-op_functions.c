#include"3-calc.h"
/**
  * op_add - returns sum of 2 integers
  * @a: integer
  * @b: integer
  * Return: sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - returns difference of 2 integers
  * @a: integer
  * @b: integer
  * Return: difference
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - returns product of 2 integers
  * @a: integer
  * @b: integer
  * Return: product
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - returns result of division of 2 integers
  * @a: integer
  * @b: integer
  * Return: result of division
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  * op_mod - returns remainder of division
  * @a: integer
  * @b: integer
  * Return: remainder of division
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
