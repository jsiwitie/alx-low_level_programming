#include <stdio.h>
/**
 * main- program's main entry point
 *
 * Description: 'This is the program that prints the alphabet in lowercase, and then in uppercase, followed by a new line'
 *
 * Return: The program always return a 0
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
}
