/* Aim: calculator
Author : Daanyal */
#include <stdio.h>
int main()
{
  float a, b, d;
  char c;
  printf("enter operation to perform[+,-,*,/,%] : ");
  scanf("%c", &c);
  printf("enter first number : ");
  scanf("%f", &a);
  printf("enter second number : ");
  scanf("%f", &b);

  switch (c)
  {
  case '+':
    d = a + b;
    printf("Answer : %.2f", d);
    break;

  case '-':
    d = a - b;
    printf("Answer : %.2f", d);
    break;

  case '*':
    d = a * b;
    printf("Answer : %.2f", d);
    break;

  case '/':
    d = a / b;
    printf("Answer : %.2f", d);
    break;

  case '%':
    d = (int)a % (int)b;
    printf("Answer : %.2f", d);
    break;

  default:
    printf("Invalid Operation");
  }

  return 0;
}
