#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 * Return: void
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	else if ((num / 10) > 0)
	{
		print_number(num / 10);
	}
	else
		num = n;

	_putchar((num % 10) + '0');
	return ();
}
