#include "main.h"
/**
  * _strlen - it returns the length of a string
  *
  * @s: character of string
  *
  * Return: (0)
  */
int _strlen(char *s)
{
	int str_length;

	str_length = 0;
	while (s[str_length] != '\0')
	{
		str_length++;
	}
	return (str_length);
}
