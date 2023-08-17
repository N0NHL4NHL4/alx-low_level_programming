#include "main.h"
/**
  * _isupper - checks uppercase characters
  *
  * @c: the character inputted
  *
  * Return: (1) when c is uppercase otherwise (0)
  *
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
