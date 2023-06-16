#include <stdio.h>
/**
  *main -To print lowercase alphabet in reverse
  *Return: 0(success)
  */
int main(void)
{
int letters;
for (letters = 'z'; letters >= 'a'; letters--)
{
	putchar(letters);
}

putchar('\n');
return (0);
}
