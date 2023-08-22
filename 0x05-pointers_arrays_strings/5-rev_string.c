#include "main.h"
/**
  * rev_string - reverses a string
  *
  * @s: input string
  *
  * Return: (0)
  */
void rev_string(char *s)
{
	int str_length, i;
	char space;

	str_length = 0;

	while (s[str_length] != '\0')
	{
		str_length++;
	}

	for (i = 0; i < str_length / 2; i++)
	{
		space = s[i];
		s[i] = s[str_length - i - 1];
		s[str_length - i - 1] = space;
	}
}
