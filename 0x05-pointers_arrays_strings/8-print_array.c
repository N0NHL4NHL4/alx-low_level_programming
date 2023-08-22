#include "main.h"
#include <stdio.h>
/**
  * print_array - prints n elements of an array of integers
  *
  * @a: pointer of array
  * @n: the number of elements to be printed in the array
  *
  * Return: (0)
  */
void print_array(int *a, int n)
{
	for (int k = 0; k < n; k++)
	{
		printf("%d,", a[k]);
	}
	_putchar('\n');
}
