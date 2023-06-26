#include "main.h"
#include <stdio.h>
/**
  *print_array -print n elemnet of an array of a string
  *@a: array
  *@n: number of element
  */
void print_array(int *a, int n)
{
int j;

for (j = 0; j < n; j++)
{
printf("%d", a[j]);
if (j != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
