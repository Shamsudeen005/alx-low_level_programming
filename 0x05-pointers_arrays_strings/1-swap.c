#include "main.h"
/**
  *swap_int -swap the value of two int
  *@a: first value to be checked
  *@b: first value to be checked
  */

void swap_int(int *a, int *b)
{
int temp = *a;

*a = *b;
*b = temp;
}
