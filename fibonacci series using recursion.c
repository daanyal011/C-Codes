/*Aim: to print fibonacci series using recurssion */
#include <stdio.h>
int fibo(int y)
{
    if (y <= 2)
    {
        return 1;
    }
    return (fibo(y - 1) + fibo(y - 2));
}
int main()
{
    int i, n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("fibonacci sequence: ");

    for (i = 1; i <= n; i++)
    {
        printf("%d ", fibo(i));
    }
    return 0;
}
