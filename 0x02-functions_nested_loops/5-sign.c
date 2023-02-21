#include "main.h"

/**
* print_sign - checks for lowercase character.
* @n: The characters to be checked.
* Return: 1 if n is an positive, 0  if zero, -1 is less than zero.
*/
int print_sign(int n)
{
	if (n > 0)
	{
	return (1);
	_putchar('+');
	}
	else if (n == 0)
	{
	return (0);
	_putchar(0 + '0');
	}
	else
	return (-1);
	_putchar('-');
}
