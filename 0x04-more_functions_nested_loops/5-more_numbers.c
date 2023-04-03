#include "main.h"
#include <stdio.h>

/**
  * print_most_numbers - returns from 1 to 9
  */

void more_numbers(void)
{
	char c;
	int i;
	int j;
	for(j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			c = i + 48;
			_putchar(c);
		}
	}
	c = '\n';
	_putchar(c);
}
