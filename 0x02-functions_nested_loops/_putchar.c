#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes character c to stdout
 * @C : the character to print
 *
 * Return : on success 1
 *          on error , -1 is returned ,and errno is set appropiately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}	
