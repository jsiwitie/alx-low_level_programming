#include "main.h"
/**
 * print_sign - program name
 * Description: 'prints sign of number n'
 * @n: number for which sign is to be printed
 * Return: negative 1 if n less than 0
 * positive 1 if n greater than 0
 * zero if n is equal to 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
