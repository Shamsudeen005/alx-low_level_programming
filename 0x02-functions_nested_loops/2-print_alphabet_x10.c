#include "main.h"
/**
  *print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
  */

void print_alphabet_x10(void)
{
	char al, int i = 0;

	while (i < 10)
{
	al = 'a';
	while (al <= 'z')
{
	_putchar(al);
	ch++;
}

	_putchar('\n');
	i++;
}
}

