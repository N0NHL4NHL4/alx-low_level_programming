#include "main.h"
#include <stdlib.h>
/**
  * *string_nconcat - concatinates two strings
  *
  * @n: limitation on second string
  * @s1: first string
  * @s2: second string
  *
  * Return: pointer to new space or NULL
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strdp;
	int i;
	unsigned int k;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	strdp = malloc(sizeof(char) * (i + n + 1));
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
	while (k < n && s2[k] != '\0')
	{
		strdp[i] = s2[k];
		i++, k++;
	}
	strdp[i] = '\0';
	return (strdp);
}
