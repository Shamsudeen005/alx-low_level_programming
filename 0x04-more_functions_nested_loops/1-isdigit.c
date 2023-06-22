#include "main.h"
/**
  *_isdigit -check digit between 0 to 9
  *@c: character to be checked
  *Return: 1 if c is digit between 0 to 9 else 0
  */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
return (0);
}
