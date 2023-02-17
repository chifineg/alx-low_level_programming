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
int a = 0;
for (; a < 10; a++)
putchar(a + '0');
putchar('\n');
return (0);
}
