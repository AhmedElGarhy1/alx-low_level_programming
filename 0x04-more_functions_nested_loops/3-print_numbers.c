#include "main.h"
#include <stdio.h>

/**
  * print_numbers - returns from 1 to 9
  */

void print_numbers(void)
{
	char c;
	for (int i=0; i<10; i++)
	{
		c = i + 48;
		_putchar(c);
	}
	c = '\n';
	_putchar(c);
}
