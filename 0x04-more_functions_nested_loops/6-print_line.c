#include "main.h"
#include <stdio.h>

/**
  * print_line - print line
  * @n: number of _ to be printed
  */

void print_line(int n)
{
	char c = '_';
	int i;
	for (i = 0; i < n; i++)
	{
		_putchar(c);
	}
	c = '\n';
	_putchar(c);
}
