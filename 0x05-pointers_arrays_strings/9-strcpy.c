#include "main.h"
/**
  * _strcpy - copies string pointed to by src to a buffer pointed to by dest
  *
  * @src: string pointed to
  * @dest: buffe poined to
  *
  * Return: (dest)
  */
char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0; src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}
	dest[k] = '\0';

	return (dest);
}
