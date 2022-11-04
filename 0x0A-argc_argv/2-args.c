#include <stdio.h>
#include "main.h"

/**
* main - program entry point
* Description: 'program prints each argument passed to it on a line'
* @argc: argument counter
* @argv: pointer to array of arguments
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

	return (0);
}
