#include "main.h"
/**
  * _strspn - gets length of prefix substring
  *
  * @s: string
  * @accept: contains bytes that may or may not be composed of parts of string
  *
  * Return: (accept)
  */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int k;
	unsigned int len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0' && accept[k] != s[i]; k++)
		;
		if (s[i] == accept[k])
			len++;
		if (accept[k] == '\0')
			return (len);
	}
	return(len);
}
