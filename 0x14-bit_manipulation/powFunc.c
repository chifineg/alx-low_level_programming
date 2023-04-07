#include <stdio.h>

/**
 * power - function to calculate power
 * @num: number to compute
 * @raisedTo: exponent
 *
 * Return: power of num
 */
double power(double num, int raisedTo)
{
	double result = 1.0;
	int i;

	for (i = 0; i < raisedTo; i++)
	{
		result *= num;
	}
	return (result);
}
