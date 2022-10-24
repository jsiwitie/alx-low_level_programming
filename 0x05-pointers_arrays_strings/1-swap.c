#include "main.h"

/**
*swap_int - name of function
*Description: 'This function swaps values for two integer'
*@a: first integer
*@b: second integer
*Return: returns nothing
*/

void swap_int(int *a, int *b)
{
	int swa = *a;

	*a = *b;
	*b = swa;
}
