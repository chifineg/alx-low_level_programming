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

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* conditional statements starts here */

int lastDigit = n % 10;

printf("Last digit of %d is %d\n", n, lastDigit);

if (lastDigit > 5)
{
printf("and is greater than 5\n");
}
else if (lastDigit == 0)
{
printf("and is 0");
}
else if (lastDigit < 6)
{
printf("and is less than 6 and not 0\n");
return (0);
}
