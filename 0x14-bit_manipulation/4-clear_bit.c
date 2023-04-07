#include "main.h"
#include <stdio.h>

/**
 * clear_bit - function to clear index of a bit to 0
 * @n: points to num to change
 * @index: position of index to change
 * Return: 1 when success, -1 when fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;
	unsigned int container;

	if (index > 64)
		return (-1);
	container = index;
	for (x = 1; container > 0; x *= 2, container--)
		;

	if ((*n >> index) & 1)
		*n -= x;

	return (1);
}
