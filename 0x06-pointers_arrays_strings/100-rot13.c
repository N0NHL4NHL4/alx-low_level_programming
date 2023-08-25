#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * rot13 - encodes a string using rot13
  *
  * @input: input string
  * Return: (0)
  */
char *rot13(char *input)
{
	char *output = input;

	for (; *input; input++)
	{
		char offset = 0;

		if (*input >= 'a' && *input <= 'z')
		{
			offset = 'a';
		}
		else if (*input >= 'A' && *input <= 'Z')
		{
			offset = 'A';
		}
		if (offset != 0)
		{
			*input = ((*input - offset + 13) % 26) + offset;
		}
	}
	return (output);
}
