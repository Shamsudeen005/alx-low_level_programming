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
	int i1 = i / 10;
	int i2 = i % 10;
	int j1 = j / 10;
	int j2 = j % 10;


	putchar('0' + i1);
	putchar('0' + i2);
	putchar(' ');


	putchar('0' + j1);
	putchar('0' + j2);

	if (i != 99 || j != 99)
{
	putchar(',');
	putchar(' ');
}
}
}

putchar('\n');
return (0);
}
