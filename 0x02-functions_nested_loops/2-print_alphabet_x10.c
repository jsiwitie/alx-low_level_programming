#include "main.h"
/**
 * print_alphabet_x10 - program for printing alphabet
 * Description: 'program prints alphabet 10 times'
 * Return: returns nothing
 */
void print_alphabet_x10(void)
{
	char alpha;

	int tenny;

	for (tenny = 0; tenny <= 9; tenny++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
