#include <stdio.h>
#include "main.h"

/**
* rev_string - function name
*Description: 'converts the string to its reverse'
* @s: string to be reversed
* Return: returns nothing
*/

void rev_string(char *s)
{
	int i = _strlen(s);

	int lenz = _strlen(s);

	int lens = _strlen(s);

	for (i = 0; i < lens / 2; i++)
	{
		lenz = *(s + i);

		*(s + i) = *(s + lens - i - 1);

		*(s + lens - i - 1) = lenz;
	}
}

/**
* _strlen - function name
*Description: 'Function for returning length of a string'
* @s: string
* Return: returnslength of any string input
*/

int _strlen(char *s)
{
	int lens = 0;

	while (*(s + lens) != '\0')
	{
		lens++;
	}
	return (lens);
}
