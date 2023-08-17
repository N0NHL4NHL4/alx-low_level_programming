#include "main.h"
/**
  * _isdigit - checks if input is digit or character
  *
  * @c: the input parameter
  *
  * Return: (1) is its a digit (0) otherwise
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
