#include "main.h"
/**
 * times_table - program name
 * Description: 'prints the timestable'
 * Return: returns nothing
 */
void times_table(void)
{
	int multiple;

	int number;

	int product;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0');

		for (multiple = 1; multiple <= 9; multiple++)
		{
			_putchar(',');
			_putchar(' ');

			product = number * multiple;

			if (product <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((product / 10) + '0');
			}
			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
