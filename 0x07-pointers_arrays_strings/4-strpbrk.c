#include "main.h"
#include <stddef.h>
/**
  * _strpbrk - searches for any set of bytes in a string
  *
  * @s: input string
  * @accept: set of bytes
  *
  * Return:  a pointer to the byte in s that matches one of the bytes in accept
  * otherwise *NULL)
  */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
				return (&s[i]);
		}
	}
	return (NULL);
}
