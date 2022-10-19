#include "main.h"
/**
 * print_last_digit - program name
 * Description: 'prints last digit'
 * @n: number for which digit to be returned
 * Return: the program returns last digit
 */
int print_last_digit(int n)
{
	int lastdig = n % 10;

	if (lastdig < 0)
		lastdig *= -1;

	_putchar(lastdig + '0');
	return (0);
}
