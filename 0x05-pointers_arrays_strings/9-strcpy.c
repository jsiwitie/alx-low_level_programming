#include "main.h"

/**
* _strcpy - function name
*Description: 'function for copying and pasting string'
* @dest: destination
* @src: source
* Return: returns the destination
*/

char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src + incl) != '\0')
	{
		*(dest + incl) = *(src + incl);
		inc++;
	}
	*(dest + incl) = '\0';

	return (dest);
}
