#include <unistd.h>
/**
 * _putchar - the program writes c charector to stdout
 * @c: This is the charecter that will be printed
 *
 *Return: a 1 is returned if process is succesful
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
