#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * sum_them_all - returns the sum of all its parameters
  *
  * @n: number of parameters
  *
  * Return: sum or (0)
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;

	if (n == 0)
	{
		return (0);
	}

	va_start(list, n);

	int i, sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);

	return (sum);
}
