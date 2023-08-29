#include "main.h"
/**
  * _memset - fills memory with constant byte
  *
  * @s: starting address
  * @b: the constant byte
  * @n: first number of bytes
  * Return:(*s)
  */
char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;

	while (n > 0)
	{
		s[k] = b;
		k++;
		n--;
	}
	return (s);
}
