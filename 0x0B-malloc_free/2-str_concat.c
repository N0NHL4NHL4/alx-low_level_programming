#include <stdlib.h>
#include "main.h"
/**
  * *str_concat - concatinates two strings
  *
  * @s1: first string
  * @s2: second string
  *
  * Return: pointer to new space in memory or NULL
  */
char *str_concat(char *s1, char *s2)
{
	char *strdp;
	int i, k;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = k = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[k] != '\0')
	{
		k++;
	}
	strdp = malloc(sizeof(char) * (i + k + 1));
	if (strdp == NULL)
	{
		return (NULL);
	}
	i = k = 0;
	while (s1[i] != '\0')
	{
		strdp[i] = s1[i];
		i++;
	}
	while (s2[k] != '\0')
	{
		strdp[i] = s2[k];
		i++, k++;
	}
	strdp[i] = '\0';
	return (strdp);
}
