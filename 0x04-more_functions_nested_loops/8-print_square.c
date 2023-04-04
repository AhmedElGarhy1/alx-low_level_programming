#include "main.h"
#include <stdio.h>

/**
  * print_square - print line
  * @n: number of # to be printed
  */

void print_square(int n)
{
	int i, j;
	int f = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{		
			_putchar('#');
		}
		_putchar('\n');
		f = 1;
	}
	if(!f)
		_putchar('\n');
}
