#include"main.h"
/**
  * char *_strncpy - a function that copies a string
  * @dest: string destination
  * @src: string source
  * @n: elements of a string
  * Return: dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int counter;

	counter = 0;
	while (src[counter] != '\0' && counter < n)
	{
		dest[counter] = src[counter];
			counter++;
	}
	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}
