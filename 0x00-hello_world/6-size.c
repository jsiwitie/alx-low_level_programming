#include <stdio.h>
/**
 * main - Entry point for program
 *
 * Description: 'C low programming'
 *
 * Return: Always 0 (When Sucsess)
 */

int main(void)
{
	char cha;
	int in;
	long int li;
	long long int llt;
	float ft;


	printf("Size of a char : %d byte(s) \n", sizeof(cha));
	printf("Size of a int : %d byte(s) \n", sizeof(in));
	printf("Size of a long int : %d byte(s) \n", sizeof(li));
	printf("Size of a long long int : %d byte(s) \n", sizeof(llt));
	printf("Size of a float : %d byte(s) \n", sizeof(ft));
	return (0);
}
