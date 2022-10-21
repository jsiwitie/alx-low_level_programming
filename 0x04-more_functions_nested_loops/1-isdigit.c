#include "main.h"

/**
 * _isdigit -  prototype name
 * Description: 'a function that checks for a digit 0-9'
 * @c: input
 * Return: function returns 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{

	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
