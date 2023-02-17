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
int num1;
int num2;
num1 = 0;
num2 = 10;
while (num1 < num2)
{
putchar(num1);
num1++;
}
putchar('\n');
return (0);
}
