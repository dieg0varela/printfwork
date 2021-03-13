#ifndef PRINTF
#define PRINTF


#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>

typedef struct pr
{
	char *op;
	void (*f)(va_list);

} pr_f;

int _printf(const char *format, ...);

void print_c(va_list list);

void print_s(va_list list);

void print_mod(va_list list);

void print_d(va_list list);

void print_normal(char ch);

#endif
