#include "main.h"
/**
  * print_alphabet - prints alphabets in lowercase using putchar
  *
  * Return: always (0)
  */
void print_alphabet(void)
{
	char al;

	al = 'a';
	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}
	_putchar('\n');
}
