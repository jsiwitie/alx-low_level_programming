#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program entry
 * Description: 'program assigning random numbers'
 * Return: usually returns a 0
 */
int main(void)
{
	int n;

	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num = n % 10;
	if (num > 5)
		printf("Last digit of %d is %d and is greater than 5 \n", n, num);
	if (num == 0)
		printf("last digit of %d is %d and is 0\n", n, num);
	if (num < 6 && num != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, num);
	return (0);
}
