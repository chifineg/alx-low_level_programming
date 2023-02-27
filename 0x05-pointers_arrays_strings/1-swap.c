#include <stdio.h>
#include "main.h"
/* imported the librabries I need to run the program */

/**
*swap_int - program function starts here
*@a: number to test
*@b: number to test
*/

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
