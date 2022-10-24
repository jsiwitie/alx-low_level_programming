#include <stdio.h>
#include "main.h"

/**
* print_array - function name
*Description: 'This function prints element of an array'
* @a: array
* @n: number of elements
* Return: nothing
*/

void print_array(int *a, int n)
{
	int incl;

	for (incl = 0; incl < n ; incl++)
	{
		if (incl != n - 1)
			printf("%d, ", a[incl]);
		else
			printf("%d", a[incl]);

	}
	putchar(10);
}
