#include "main.h"
/**
  * swap_int - swaps two integers
  *
  * @a: the first pointer
  * @b: the second pointer
  *
  * Return: (0)
  */
void swap_int(int *a, int *b)
{
	int space;
	int *c = &space;

	*c = *a;
	*a = *b;
	*b = *c;
}
