#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check the code
 * @c: character to be tested
 * Return: Always 0.
 */

int _isdigit(char c)
{
	if (c >= 48 && c < 58)
		return (1);
	return (0);
}
