#include "main.h"

/**
 * set_bit - function will set index of a given bit to 1
 * @n: pointer to a number
 * @index: bit to change, index from 0
 * Return: 1 when success, -1 when fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
		return (-1);

	for (i = 1; index > 0; index--, i *= 2)
		;
	*n += i;

	return (1);
}
