/* Author : Daanyal
    Aim:  WAP to find the greatest number amongst three entered numbers using conditional operator*/
#include <stdio.h>
int main()
{
  int a, b, c, greatest;
  printf("enter 3 numbers ");
  scanf("%d %d %d", &a, &b, &c);

  // greatest=a>b?(a>c?a:c):(b>c?b:c);
  greatest = a > b && a > c ? a : (b > a && b > c ? b : c);
  printf("\n greatest number is : %d", greatest);

  return 0;
}
