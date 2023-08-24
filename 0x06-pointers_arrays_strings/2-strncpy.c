#include "main.h"
/**
  * _strncpy - copies a string and works like strncat.c
  *
  * @dest: imputted string
  * @src: imputted string
  * @n: the number of bytes
  *
  * Return: (0)
  */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
