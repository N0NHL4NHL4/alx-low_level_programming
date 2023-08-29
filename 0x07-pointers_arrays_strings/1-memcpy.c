#include "main.h"
/**
  * _memcpy - copies memory area
  *
  * @dest: storage memory
  * @src: memory to be copied to
  * @n: number of bytes
  *
  * Return: (src)
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int k = 0;

	while (n > 0)
	{
		dest[i] = src[k];
		i++;
		k++;
		n--;
	}
	return (dest);
}
