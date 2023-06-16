#include <stdio.h>
/**
  * main -To print alphabets in lowercase and uppercase
  *Return: 0(success)
  */
int main(void)
{
char ch;
/* print alphabets in lowercase*/
for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}

/* print alphabets in uppercase*/
for (ch = 'Z'; ch <= 'Z'; ch++)
{
	putchar(ch);
}

putchar('\n');
return (0);
}
