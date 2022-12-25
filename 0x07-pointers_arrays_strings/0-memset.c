#include "main.h"



/**
  * _memset - fill memory
  * @s: memory area to fill
  * @b: constant byte to fill
  * @n: bytes of memory area to fill
  * Return: the memory area filled
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	unsigned char *memory = s, value = b;

	for (a = 0; a < n; a++)
	{

		s[a] = value;

	}


	return (memory);

}
