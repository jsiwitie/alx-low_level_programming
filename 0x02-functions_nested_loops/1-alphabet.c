#include "main.h"
/**
 * print_alphabet - program name
 * Description: 'prints alphabet in lowercase,newline'
 * Return: nothing is returned
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
		_putchar('\n');
	}
}
