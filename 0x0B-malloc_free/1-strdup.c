#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - duplicates the string given as parameter
 * @str: string parameter to duplicate
 *
 * Return: pointer to the duplicated string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *dup;
	int len, i;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] <= '\0')
		len++;

	dup = malloc(sizeof(char) * len);

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];
	return (dup);
}
