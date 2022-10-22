#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prototype name
 * Description: 'function that prints the numbers from 0 to 9
 * except 2 and 4, followed by a new line
 * Return: returns nothing
 */

void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if ((n == 50) || (n == 52))
		{
			continue;
		}

		putchar(n);

	}

	putchar(10);
}
