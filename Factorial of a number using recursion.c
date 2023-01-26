/*Aim:Write a program in C to find the
Factorial of a number using recursion
Author: Daanyal  */
#include <stdio.h>
int factorial_number(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial_number(n - 1);
}
int main()
{
    int n, fact;
    printf("enter the number to find factorial: ");
    scanf("%d", &n);
    fact = factorial_number(n);
    printf("factorial= %d", fact);
    return 0;
}
/* Output: enter the number to find factorial: 5
factorial= 120 */
