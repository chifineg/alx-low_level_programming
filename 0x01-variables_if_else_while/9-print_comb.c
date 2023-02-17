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
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
if (i < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
