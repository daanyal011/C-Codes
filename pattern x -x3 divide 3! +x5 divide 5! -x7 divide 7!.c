/*Aim: WAP to print pattern x -x3/3! +x5/5! -x7/7!+����
 */
#include <stdio.h>
#include <math.h>
float factorial(float n)
{
  if (n <= 1)
  {
    return 1;
  }
  return n * factorial(n - 1);
}
int main()
{
  float sum = 0, n, sign = 1;
  int i;
  printf("To calculate series\n");
  printf("Enter the number: ");
  scanf("%f", &n);

  for (i = 1; i <= n; i++)
  {
    if (i % 2 != 0)
    {
      sum = sum + pow(n, i) / (factorial(i) * sign);
      sign = sign * -1;
    }
  }
  printf("sum of series = %f", sum);
  return 0;
}
