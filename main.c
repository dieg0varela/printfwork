#include <stdio.h>
#include "holberton.h"

int main(void)
{
	int i = _printf("%d%c%% hola\n", 69000 + 420 , '\n');
	printf("%i\n", i);
	return (0);

}
