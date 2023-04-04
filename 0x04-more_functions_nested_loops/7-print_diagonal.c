#include "main.h"
#include <stdio.h>

/**
  * print_diagonal - print line
  * @n: number of _ to be printed
  */

void print_diagonal(int n)
{
	int i, j;
	int f = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{		
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		f = 1;
	}
	if(!f)
		_putchar('\n');
}
