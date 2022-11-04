#include <stdio.h>
#include "main.h"

/**
* main - Entry point
* Description: 'function prints program name'
* @argc: argument counter
* @argv: pointer to array of arguments
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
