#include "main.h"
/**
  *print_most_numbers- print 0 to 9 except 2and 4
  */

void print_most_numbers(void)
{
char c;

for (c = 0; c <= 9; c++)
{
if (c != 50)
{
if (c != 52)
{
_putchar(c);
}
}
}
_putchar('\n');
}
