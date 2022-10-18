#include "main.h"
/**
 * main - program entry point
 * Description: 'prints alphabet in lowercase,newline'
 * Return: 0 is returned
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
		_putchar('\n');
	}
	return (0);
}
