#include <stdio.h>

/**
 * main - programs entry point
 * Description: 'prints Fizz for int divisible by 3 and Buzz for 5'
 * Return: int
 */

int main(void)
{
	int i;

	printf("1");

	for (i = 2; i <= 100; i++)
	{
		printf(" ");
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 3 != 0 && i % 5 != 0)
			printf("d", n);
	}
	printf("\n");
	return (0);
}
