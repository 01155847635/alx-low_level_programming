#include "main.h"

/*
 * 1-swap.c - a function that swaps the values of two integers
 *
 * @n: This is the entry
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
  *b = temp;
}
