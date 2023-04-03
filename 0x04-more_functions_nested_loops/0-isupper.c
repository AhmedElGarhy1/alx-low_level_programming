#include "main.h"
#include <stdio.h>

int _isupper(char c)
{
	if(c <= 90 && c >= 65)
		return (1);
	else
		return (0);
}
