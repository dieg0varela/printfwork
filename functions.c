#include "holberton.h"

/**
 * print_c - function called by _printf to print characters
 * @list: argument variable that is passed
 * Return: void
 */
void print_c(va_list list)
{
	char *c = va_arg(list, char *);
	write(1, &c, 1);
	va_end(list);
}

/**
 * print_s - function called by _printf to print string
 * @list: argument variable that is passed
 * Return: void
 */
void print_s(va_list list)
{
	char *str = va_arg(list, char *);
	int len = strlen(str);
	write(1, str, len);
	va_end(list);
}

/**
 * print_mod - function called by _printf to print mod character
 * @list: argument variable that is passed
 * Return: void
 */
void print_mod(va_list list)
{
	char c = '%';
	write(1, &c, 1);
	va_end(list);
}
/**
 * print_mod - function called by _printf to print mod character
 * @list: argument variable that is passed
 * Return: void
 */
void rec_pd(int num)
{
	if (num != 0)
	{
		rec_pd(num / 10);
		print_normal(num % 10 + '0');
	}
}
/**
 * print_d - function called by _printf to print digits
 * @list: argument variable that is passed
 * Return: void
 */
void print_d(va_list list)
{
	int in = va_arg(list, int);
	rec_pd(in);
	va_end(list);


}

void print_normal(char ch)
{
	write(1, &ch, 1);
}
