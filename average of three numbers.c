/*  Author : Daanyal Parbulkar */
#include <stdio.h>
int main()
{
    int a, b, c, sum;
    float avg;

    printf("enter three numbers (a,b,c): ");
    scanf("%d, %d, %d", &a, &b, &c);

    sum = a + b + c;
    avg = (float)sum / 3;
    printf("sum = %d", sum);
    printf("\n average = %.1f", avg);

    return 0;
}
