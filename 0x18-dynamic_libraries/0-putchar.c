#include "main.h"
/* imported the main.h library I need to run the program */

/**
* main - program function starts here
*
* Return: 0 (when no error)
*/
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
{
	_putchar(c[i]);
}
_putchar('\n');
return (0);
}
