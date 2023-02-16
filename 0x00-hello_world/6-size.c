#include <stdio.h>
/**
 * main - main function starts here
 *
 * Return: when 0 (no error)
 */
int main(void)
{
	printf("size of char %lu byte(s)\n", sizeof(char));
	printf("size of int %lu byte(s)\n", sizeof(int));
	printf("size of float %lu byte(s)\n", sizeof(float));
	printf("size of long in %lu byte(s)\n", sizeof(long int));
	printf("size of long long int %lu byte(s)\n", sizeof(long long int));
	return (0);
}
