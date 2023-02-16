#include <stdio.h>
/**
 * main - main function starts here
 *
 * Return: when 0 (no error)
 */
int main(void)
{
	printf("size of char %lu bytes", sizeof(char));
	printf("size of int %lu bytes", sizeof(int));
	printf("size of double %lu bytes", sizeof(double));
	printf("size of float %lu bytes", sizeof(float));
	printf("size of long in %lu bytes", sizeof(long int));
	printf("size of long long int %lu bytes", sizeof(long long int));
	return (0);
}
