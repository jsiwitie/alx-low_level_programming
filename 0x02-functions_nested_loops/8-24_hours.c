#include "main.h"
/**
 * jack_bauer - program name
 * Description: 'prints every minute of day'
 * Return: does not return anything
 */
void jack_bauer(void)
{
	int hr;

	int minu;

	for (hr = 0; hr <= 23; hr++)
	{
		for (minu = 0; minu <= 59; minu++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((minu / 10) + '0');
			_putchar((minu % 10) + '0');
			_putchar('\n');
		}
	}
}
