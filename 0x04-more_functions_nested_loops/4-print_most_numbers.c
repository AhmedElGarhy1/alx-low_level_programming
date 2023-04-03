#include "main.h"
#include <stdio.h>

/**
  * print_most_numbers - returns from 1 to 9
  */

void print_most_numbers(void)
{
	char c;
	int i;
	for (i = 0; i < 10; i++)
	{
		if (i == 4 || i == 2)
			continue;
		c = i + 48;
		_putchar(c);
	}
	c = '\n';
	_putchar(c);
}
