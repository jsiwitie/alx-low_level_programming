#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*print_rev - function name
*Description: 'Prints a reversed string'
*@s: String to reverse
*Return: returns nothing
*/

void print_rev(char *s)
{
	int lens = strlen(s);

	while (lens--)
		putchar(*(s + lens));

	putchar(10);
}
