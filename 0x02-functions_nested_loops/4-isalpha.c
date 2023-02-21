#include "main.h"

/**
* _isalpha - checks for lowercase character.
* @a-z @A-Z: The characters to be checked.
* Return: 1 if c is an alphabet, 0  if otherwise.
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	else
	return (0);
	}
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	else
	return (0);
	}
}
