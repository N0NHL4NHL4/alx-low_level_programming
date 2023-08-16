#include "main.h"
/**
  * _islower - detects lowercase and uppercase
  *
  * Description: ese _putchar to print
  *
  * Return: (1) if c is lower otherwise (0)
  *
  */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
	lower = 1;
	}
	return (lower);
}
