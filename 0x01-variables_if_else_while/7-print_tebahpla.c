#include <stdio.h>

/**
 * main - program entry point
 * Description - 'use while statement to print lowercase a to z in reverse'
 * Return: Always 0 (Success)
*/

int main(void)
{
	char c;

	c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;

	}
	putchar('\n');
	return (0);
}
