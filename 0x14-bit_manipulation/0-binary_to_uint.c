#include "main.h"
#include <string.h>

/**
 *binary_to_uint - function to convert from base 2 to base 10
 *@b: base 2 number to convert
 *
 *Return: 0 if NULL and base 10 number if binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int unit = 0;
	int x, y;
	int len = strlen(b);
	int pwr = len - 1;

	if (b == NULL)
	{
		return (0);
	}

	for (y = 0; y < len; y++)
	{
		if (b[y] != '0' && b[y] != '1')
		{
			return (0);
		}
	}

	for (x = 0; x < len; x++)
	{
		if (b[x] == '1')
		{
			unit += power(2, pwr);
		}
		pwr--;
	}
	return (unit);
}

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
