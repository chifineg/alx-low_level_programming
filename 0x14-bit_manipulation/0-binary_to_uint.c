#include "main.h"
#include <string.h>

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
			unit += pow(2, pwr);
		}
		pwr--;
	}
	return (unit);
}
