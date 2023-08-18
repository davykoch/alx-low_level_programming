#include"3-calc.h"
/**
  * main - checks the arguments
  * @argc: array count of arguments
  * @argv: argument vector
  * Return: Error if arguments number is wrong or no operator
  */
int main(int argc, char *argv[])
{
	int a, b;
	char c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	c = argv[2][0];
	if (c != '+' && c != '-' && c != '*' && c != '/' && c != '%')
	{
		printf("Error/n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", (get_op_func(argv[2]))(a, b));
			return (0);
			}
