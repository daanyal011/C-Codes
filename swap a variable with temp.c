/* Author : Daanyal
    Aim: Swap with Temp*/
#include <stdio.h>
int main()
{
  int a, b, temp;

  printf("enter two numbers (a,b)");
  scanf("%d,%d", &a, &b);

  printf("\n before swapping :");
  printf("\n number 1: %d", a);
  printf("\n number 2: %d", b);

  temp = a;
  a = b;
  b = temp;

  printf("\n\n after swapping :");
  printf("\n number 1: %d", a);
  printf("\n number 2: %d", b);

  return 0;
}
