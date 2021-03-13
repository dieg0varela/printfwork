#include "holberton.h"
/**
 *  - print the numbers given
 *
 * @format:
 *
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, j;

	pr_f arr[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_mod},
		{"d", print_d},
		{NULL, NULL}
	};
	va_start (ap, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		if (format[i] =='%')
		{
			i += 1;
			while (arr[j].op != NULL)
			{
				if (format[i] == arr[j].op[0])
				{
					arr[j].f(ap);
					break;
				}
				j++;
			}
		}
		i++;
	}
	va_end (ap);
	return (0);
}
