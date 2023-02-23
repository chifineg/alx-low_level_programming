#include "main.h"

/* imported the main.h librrary I need to run the program */

/**
* _isupper - program function starts here
*@c: variable to test
* Return: 1 when uppercase, 0 when otherwise
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
