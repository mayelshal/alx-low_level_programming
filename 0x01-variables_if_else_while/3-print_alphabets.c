#include <stdio.h>

/**
 * main - entry point
 *
 * description : print alphabet in lowercase then in uppercase 
 *   
 * return :0 (success)
*/

int main (void)
{
	char ch = 'a';
	char ch = 'A';
	
	/*print a - z */
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*print A - Z*/
	while (ch <= 'Z')
        {
                putchar(CH);
                ch++;
        }
	putchar('\n');

	return (0);
}	
