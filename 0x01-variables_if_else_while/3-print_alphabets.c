#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
/* imported the librabries I need to run the program */

/**
* main - program function starts here
*
* Return: 0 (when no error)
*/
int main(void)
{
char alpha;
char zaph;
char ALPHA;
char ZAPH;
alpha = 'a';
zaph = 'z';
ALPHA = 'A';
ZAPH = 'Z'
while (alpha <= zaph)
{
putchar(alpha);
alpha++;
}
while (ALPHA <= ZAPH)
{
putchar(ALPHA);
ALPHA++;
}
putchar('\n');
return (0);
}
