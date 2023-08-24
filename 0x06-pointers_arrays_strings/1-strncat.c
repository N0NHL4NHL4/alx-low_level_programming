#include "main.h"
/**
  * _strncat - concatenates two strings but use more n bytes from src string
  *
  * @dest: string imputted
  * @src: string imputted
  * @n: the number of bytes needed to terminate src
  *
  * Return: (0)
  */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] - '\0';
	return (dest);
}
