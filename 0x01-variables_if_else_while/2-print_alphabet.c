#include <stdio.h>

/**
 * main - entry point
 *
 * description : print all alphabet letters
 *
 * return :0 (success)
*/ 

int mai (void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}	
