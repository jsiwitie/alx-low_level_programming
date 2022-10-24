#include "main.h"

/**
 *_strlen - function name
 *Description: 'This function returns String length'
 * @s: string
 *Return: returns length of type int;
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
