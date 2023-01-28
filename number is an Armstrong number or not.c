/* Aim:Write a C program to find if the entered number is an Armstrong
number or not using do while loop.
Author: Daanyal*/
#include <stdio.h>
int main()
{
  int rem = 0, sum = 0, num, num1;
  printf("enter a number to check whether the given number is armstrong: ");
  scanf("%d", &num);
  num1 = num;

  do
  {
    rem = num % 10;
    sum = sum + (rem * rem * rem);
    num = num / 10;
  }

  while (num > 0);
  if (sum == num1)
  {
    printf("number is armstrong");
  }
  else
  {
    printf("number is not armstrong");
  }
  return 0;
}
/* Output:
enter a number to check whether the given number is armstrong: 153
number is armstrong
*/
