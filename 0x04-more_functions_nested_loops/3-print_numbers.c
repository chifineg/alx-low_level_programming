#include "main.h"
/* imported the library I need to run the program */

/**
* print_numbers - program function starts here
*
* Return: 0 (when no error)
*/

void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}
