#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * a funcion that swaps the value of two integers
 * @pointer : a
 * @pointer : b
 *
 * Return: 0
 */
int main(void)
swap_int(int *a, int *b)
{

       int x = *a;
       *a = *b;
       *b = x;

}
