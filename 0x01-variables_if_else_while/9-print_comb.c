#include <stdio.h>
/*
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int single_digit;

	for (single_digit = 0; single_digit < 10; single_digit++)
	{
		putchar(single_digit);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
