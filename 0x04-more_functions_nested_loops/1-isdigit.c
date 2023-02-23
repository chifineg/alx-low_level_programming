#include "main.h"
/* imported the libraryI need to run the program */

/**
* _isdigit - program function starts here
*@c: variable to test
* Return: 1 when digit, 0 when otherwise
*/

int _isdigit(int c);
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
