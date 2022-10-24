#include <stdio.h>
#include "main.h"

/**
 * puts_half - function name
 * Description: 'function that prints a string'
 * @str: string to print
 * Return: nothing
 */

void puts_half(char *str)
{
	int i = _strlen(str);

	int lens = _strlen(str);

	for (i = ((lens - 1) / 2) + 1; i < lens; i++)
		putchar(*(str + i));
	putchar(10);
}
/**
* _strlen - function name
*Description: 'function returns length of a string'
* @s: string
* Return: the length of the given string
*/

int _strlen(char *s)
{
	int lens = 0;

	while (*(s + lens) != '\0')
		lens++;

	return (lens);
}
