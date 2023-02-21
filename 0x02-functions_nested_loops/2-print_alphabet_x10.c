#include "main.h"
/* imported the main.h library I need to run the program */

/**
* print_alphabet_x10 - program function starts here
*
* Return: 0 (when no error)
*/
void print_alphabet_x10(void)
{
	int c;
	char d;

	for (c = 1; c <= 10; c++)
	{
		for (d = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}
	_putchar('\n');
	}
}
