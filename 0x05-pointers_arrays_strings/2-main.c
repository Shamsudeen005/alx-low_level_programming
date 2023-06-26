#include "main.h"
#include <stdio.h>

/**
  *main - Check the code
  *Return: 0(succss)
  */

int main(void)
{
char *str;
int len;

str = "My first strlen!";
len = _strlen(str);
printf("%d\n", len);
return (0);
}
