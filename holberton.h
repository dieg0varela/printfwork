#ifndef PRINTF
#define PRINTF


#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>


typedef struct pr
{
	char *op;
	void (*f)(va_list);

} pr_f;

int _printf(const char *format, ...);


#endif
