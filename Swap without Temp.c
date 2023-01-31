
/* Author : Daanyal
Aim: Swap W/O Temp*/
#include <stdio.h>
int main()
{
    int a, b;

    printf("enter two numbers (a,b):\n");
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);

    printf("\n before swapping :");
    printf("\n number 1: %d", a);
    printf("\n number 2: %d", b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\n\n after swapping :");
    printf("\n number 1: %d", a);
    printf("\n number 2: %d", b);

    return 0;
}
