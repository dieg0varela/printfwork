#include "holberton.h"

void print_c(va_list list)
{
	char *c = va_arg(list, char *);
	printf("HOLA\n");
	write(1, &c, 1);
	va_end(list);
}

void print_s(va_list list)
{
	char *str = va_arg(list, char *);
	int len = strlen(str);
	write(1, str, len);
	va_end(list);
}

void print_mod(va_list list)
{
	char c = '%';
	write(1, &c, 1);
	va_end(list);
}
