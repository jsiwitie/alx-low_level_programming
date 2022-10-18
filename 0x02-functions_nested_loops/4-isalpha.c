#include "main.h"
/**
 * _isalpha - program name
 * Description: 'checks for alphatic character'
 * @c: this is the character to be checked
 * Return: returns 1 if c is alphabet ,0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
