#include <stdio.h>
/**
  *main -To print all number of base 16
  *Return: 0(success)
  */
int main(void)
{
int digit;
for (digit = 0; digit < 16; digit++)
{
	if (digit < 10)
	{
	putchar(digit + '0');
	}
	else
	{
	putchar(digit - 10 + 'a');
	}
}
putchar('\n');
return (0);
}
