#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - entry point
 *Description: 'program generate valid passwords for program 101-crackme'
 * Return: returns 0
 */

int main(void)
{

	char a;

	int b;


	srand(time(0));

	while (b <= 2645)

	{

		a = rand() % 128;

		b += a;

		putchar(a);

	}

	putchar(2772 - b);



	return (0);

}
