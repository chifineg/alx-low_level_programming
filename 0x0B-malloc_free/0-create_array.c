#include "main.h"
#include <stdlib>

/**
 * *create_array - creates an array of variable type char,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
	char* x;
	int y;

	x = malloc(sizeof(char) * size);
	if (size == 0 || x == NULL)
		return (NULL);
	for (y = 0; y < size; y++)
		x[y] = c;
	return (x);
}
