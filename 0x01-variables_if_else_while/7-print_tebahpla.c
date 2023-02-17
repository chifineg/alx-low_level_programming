#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
alpha = 'z';
zaph = 'a';
while (alpha >= zaph)
{
putchar(alpha);
alpha++;
}
putchar('\n');
return (0);
}
