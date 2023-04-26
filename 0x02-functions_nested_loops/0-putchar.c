#include "main.h"

/**
 * main - entry point
 *
 * Description : prints _putchar using putchar prototype
 *
 * Return : always 0 (success)
*/

int main(void)
{
	char str[] = "_puchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
