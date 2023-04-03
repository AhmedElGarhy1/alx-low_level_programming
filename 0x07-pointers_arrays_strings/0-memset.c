#include "main.h"
#include <stdio.h>

/**
 * _memset  - fill memory
 * @s: memory area
 * @b: value
 * @n: number of areas
 * Return: s location
 */

char *_memset(char *s, char b, unsigned int n)
{
	for(int i=0; i<=n; i++)
		s[i] = b;
	return( *s);
}
