#include "holberton.h"
void print_c(va_list list)
{
	write(1, va_arg(list, int), 1);
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
	write(1, '%', 1);
	va_end(list);
}
