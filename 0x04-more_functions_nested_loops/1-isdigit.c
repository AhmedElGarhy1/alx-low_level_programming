#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int _isdigit(char c)
{
	if (c >= 48 && c < 58)
		return (1);
	return (0);
}
