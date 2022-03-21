#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * a function that swaps the value of two integers
 * @pointer : int a
 * @pointer : int b
 * 
 * Return: Always 0.
 */
int main(void)
swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}