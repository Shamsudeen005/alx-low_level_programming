#include "main.h"
/**
  *more_numbers -To print 10 times
  */
void more_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
{
int j;
for (j = 0; j < 15; j++)
{
if (j >= 10)
_putchar(j / 10 + '0');
_putchar(j % 10 + '0');
}
_putchar('\n');
}
}
