#include <stdio.h>
/**
 * main- program entry point
 * Description: 'program prints alphabet lowercase,uppercase,new line'
 * Return: program always returns 0
 */
int main(void)
{
	char az = 'a';
	char AZ = 'A';

	while (az <= 'z')
	{
		putchar(az);
		++az;
	}

	while (AZ <= 'Z')
	{
		putchar(AZ);
		++AZ;
	}

	putchar('\n');

	return (0);
}
