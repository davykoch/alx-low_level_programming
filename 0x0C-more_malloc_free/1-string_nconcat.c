#include"main.h"
#include<stdlib.h>
/**
  *string_nconcat - function that concatenates two strings
  * @s1: string
  * @s2: string
  * @n: string length
  * Return: output of string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size1 = 0, size2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	if (n > size2)
		n = size2;
	p = malloc((size1 + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
	{
		p[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		p[size1 + i] = s2[i];
	}
	p[size1 + n] = '\0';
	return (p);
}
