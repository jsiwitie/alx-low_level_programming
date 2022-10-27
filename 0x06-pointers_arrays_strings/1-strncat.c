#include "main.h"

/**
* _strncat - prototype name
* Description: 'Concatenates two strings'
* @dest: The destination value
* @src: The source value
* @n: The limit of the concatenation
* Return: A pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int dlength = 0, j = 0;

	while (dest[dlength])
	{
		dlength++;
	}
	while (j < n && src[j])
	{

		dest[dlength] = src[j];

		dlength++;

		j++;

	}
	dest[dlength + n + 1] = '\0';

	return (dest);

}
