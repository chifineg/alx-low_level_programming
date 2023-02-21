#include "main.h"

/**
* _isalpha - checks for lowercase character.
* @c: a-z and A-Z are the characters to be checked.
* Return: 1 if c is an alphabet, 0  if otherwise.
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}
