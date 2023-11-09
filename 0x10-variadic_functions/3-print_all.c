#include<stdarg.h>
#include<stdio.h>
#include"variadic_functions.h"

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

void print_float(va_list arg)
{
	 printf("%f", va_arg(arg, double));
}

void print_string(va_list arg)
{
	printf("%s", va_arg(arg, char *));
}
void (*selector(char c))(va_list)
{
	if (c == 'c')
	{
		return &print_char;
	}
	else if (c == 'i')
	{
		return &print_int;
	}
	else if (c == 'f')
	{
		return &print_float;
	}
	else if (c == 's')
	{
		return &print_string;
	}
	  return NULL;
}

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;

	va_start(ap,format);
	if (format[i] == '\0')
		return;
	while (format[i])
	{
		void (*print_func)(va_list) = selector(format[i]);
		if (print_func != NULL)
		{
			print_func(ap);
			if (format[i + 1] != '\0')
				printf(", ");
		}
		i++;
	}
	printf("\n");
}
