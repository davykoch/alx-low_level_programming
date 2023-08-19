#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>

/**
  * print_strings - prints strings, followed by a new line.
  * @separator:  string to be printed between the strings
  * @n: number of strings passed to the function
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(ap, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nill)");
			continue;
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
