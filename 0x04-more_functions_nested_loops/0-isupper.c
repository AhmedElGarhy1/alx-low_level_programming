#include "main.h"
#include <stdio.h>

/**
  * _isupper - returns the largest of 3 numbers
  * @c: chart to test if upper or lower
  * Return: number 1 if upper else 2
  */

int _isupper(char c)
{
	if (c <= 90 && c >= 65)
		return (1);
	else
		return (0);
}
