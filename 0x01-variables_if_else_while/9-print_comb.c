#include <stdio.h>
/*
 * main - Program entry point
 *
 * Description: 'the program's descritpion'
 *
 * Return: retuns a 0
 */
int main(void)
{
	int single_digit;

	for (single_digit = 0; single_digit < 10; single_digit++)
	{
		putchar(single_digit + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
