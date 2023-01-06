/* Aim: print all the prime numbers between two
numbers entered by the user using functions
Author: Daanyal*/
#include <stdio.h>
int prime_checker(int n)
{
  int i;
  for (i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      return 0;
    }
  }
  return 1;
}
int main()
{
  int a, b, i;
  printf("enter starting and end number(a,b): ");
  scanf("%d,%d", &a, &b);
  printf("prime numbers: ");

  for (i = a; i <= b; i++)
  {
    if (prime_checker(i) == 1)
    {
      printf("%d,", i);
    }
  }
  return 0;
}
/* Output:
enter starting and end number(a,b): 2,10
prime numbers: 2,3,5,7,*/
