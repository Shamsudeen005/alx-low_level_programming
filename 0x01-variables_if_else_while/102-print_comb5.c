#include <stdio.h>
/**
  *main - Entry point
  *Return: 0 (success)
  */
int main(void)
{
int i, j;
for (i = 0; i <= 99; i++)
{
for (j = i; j <= 99; j++)
{
	int tens_i = i / 10;
	int ones_i = i % 10;
	int tens_j = j / 10;
	int ones_j = j % 10;


	putchar(tens_i / 10 + '0');
	putchar(tens_i % 10 + '0');
	putchar(ones_i / 10 + '0');
	putchar(ones_i % 10 + '0');
	putchar(' ');
	putchar(tens_j / 10 + '0');
	putchar(tens_j % 10 + '0');
	putchar(ones_j / 10 + '0');
	putchar(ones_j % 10 + '0');


	if (i != 99 || j != 99)
{
	putchar(',');
	putchar(' ');
}
}
}
return (0);
}
