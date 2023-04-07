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
	unsigned int result, pwr;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (pwr = 1, result = 0, i--; i >= 0; i--, pwr *= 2)
	{
		if (b[i] == '1')
			result += pwr;
	}

	return (result);
}
