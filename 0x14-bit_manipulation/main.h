#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * power - function to calculate power of a given number
 * @num: number to calculate
 * @raisedTo: exponent
 *
 * Return: power of num
 */

double power(double num, int raisedTo)
{
	double ans = 1.0;
	int lo;

	for (lo = 0; lo < raisedTo; lo++)
	{
		ans *= num;
	}
	return (ans);
}

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
