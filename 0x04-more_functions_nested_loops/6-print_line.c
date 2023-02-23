#include "main.h"
/* imported the library I need to run the program */

/**
* print_line - program function starts here
*@n: variable to draw
* Return: 0 (when no error)
*/

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
