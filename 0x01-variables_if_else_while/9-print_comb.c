#include <stdio.h>
/*
 * main - Program entry point
 * Description: 'Program that prints possible combination of single digits'
 * Return: retuns a 0 always
 */
int main(void)
{
	int single_digit;

	for (single_digit = 0; single_digit < 10; single_digit++)
	{
		putchar(single_digit + '0');
		if (single_digit > 9)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
		return (0);
	}
}
