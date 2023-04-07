#include "main.h"
#include <stdio.h>
/**
 * get_bit - function to get the bit at a given index
 * @n: bit to obtain
 * @index: counter starting from 0, for the given bi
 * Return: Vbit at index, or -1 when error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int container;

	if (index > 64)
		return (-1);

	container = n >> index;

	return (container & 1);
}
