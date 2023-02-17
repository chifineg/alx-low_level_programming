#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* imported the libraries I need for this program */

/**
* main - program funtion starts here
*
* Return: 0 (when no error)
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* start of if/else */
if (n > 0)
{
printf("%d is positive", n);
}
else if (n == 0)
{
printf("%d is zero", n);
}
else
printf("%d is negative", n);
return (0);
}
