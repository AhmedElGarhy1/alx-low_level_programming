#include "main.h"
#include <stdio.h>

/**
  * print_numbers - returns from 1 to 9
  */

void print_numbers(void)
{
	for (int i=0; i<10; i++)
		putchar(i+48);
	putchar('\n');
}
