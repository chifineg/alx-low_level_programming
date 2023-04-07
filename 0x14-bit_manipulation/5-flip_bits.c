#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function to reverse one number to another number
 * @n: source num
 * @m: destination num
 * Return: amount of bits  to fliped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int varying;
	int x;

	varying = n ^ m;
	x = 0;

	while (varying)
	{
		x++;
		varying &= (varying - 1);
	}

	return (x);
}
