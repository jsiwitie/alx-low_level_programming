#include <stdio.h>
/**
 * main - program entry point
 * Description: 'prints alphabet lowercase,new line'
 * Return: must return 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
