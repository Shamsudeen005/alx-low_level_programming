#include "main.h"
#include <unistd.h>
/**
  *_putchar -write the character c to unistd
  *@c: The character to be print
  *Return: on success 1
  *on error, -1 is returned and errno is set approproiately
  */
int _putchar(char c)
{
return (write(1, &c, 1));
}
