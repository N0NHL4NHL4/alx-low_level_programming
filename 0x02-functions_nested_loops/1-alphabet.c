#include "main.h"
/**
  * print_alphabet - prints alphabets in lowercase using putchar
  *
  * Return: always (0)
  */
void print_alphabet(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
		_putchar(al);
		_putchar("\n");
	return (0);
}
