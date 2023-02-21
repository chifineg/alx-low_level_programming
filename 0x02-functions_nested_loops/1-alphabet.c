#include "main.h"
/* imported the main.h library I need to run the program */

/**
* main - program function starts here
*
* Return: 0 (when no error)
*/
void print_alphabet(void)
{
	char c;
	for(c = 'a'; c <= 'z'; c++)
	_putchar(c);
	_putchar('\n');
}
