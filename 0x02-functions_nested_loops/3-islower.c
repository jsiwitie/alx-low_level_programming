#include "main.h"
/**
 * _islower - program name
 * Description: 'Program for checking case of letters'
 * @c: the character that is checked
 * Return: either 0 or 1 based on case of character
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
