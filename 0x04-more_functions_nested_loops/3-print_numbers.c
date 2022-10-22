#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prototype name
 * Description: 'This function prints the numbers 0 to 9'
 * Return: returns digits 0-9 followed by newline character
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}

	putchar(10);
}
