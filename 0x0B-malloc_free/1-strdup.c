#include "main.h"
#include <stdlib.h>
/**
  * *_strdup - returns pointer to newly allocated space in memory with copy
  *
  * @str: string to copy
  *
  * Return: pointer or NULL
  */
char *_strdup(char *str)
{
	char *strdp;
	int i, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	strdp = malloc(sizeof(char) * (i + 1));

	if (strdp == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j]; j++)
	{
		strdp[j] = str[j];
	}
	return (strdp);
}
