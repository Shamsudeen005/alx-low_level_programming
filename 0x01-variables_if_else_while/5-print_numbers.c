#include <stdio.h>
/**
  *main -To print all digits number of base 10
  *Return: 0(success)
  */
int main(void)
{
int number;
for (number = 0; number <= 9; number++)
{
	putchar('0' + number);
}

putchar('\n');
return (0);
}

