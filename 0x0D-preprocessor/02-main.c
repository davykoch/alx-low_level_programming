#include <stdio.h>
/**
  * main - print file name compiled from
  * Return: 0
  */
#define FILENAME __FILE__

int main(void)
{
	printf("%s\n", FILENAME);
	return (0);
}
