#include "main.h"
/* imported the library I need to run the program */

/**
* more_numbers - program function starts here
*
* Return: 0 (when no error)
*/

void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			_putchar(y + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}