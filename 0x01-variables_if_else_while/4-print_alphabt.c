#include <stdio.h>
/**
 * main - program entry
 * Description: 'print alphabet except q and e'
 * Return: 0 as usual
 */
int main(void)
{
	char az = 'a';

	while (az <= 'z')
	{
		if (az == 'e' || 'q' == az)
			++az;
		putchar(az);
		++az;

	}

	putchar('\n');

	return (0);
}
