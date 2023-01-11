/* Aim: WAP to print fibonacci series till number entered by user
Author: Daanyal*/
#include <stdio.h>
int main()
{
    int f0, f1, f, n, i;
    printf("Enter limit for fibonacci: ");
    scanf("%d", &n);
    f0 = 0;
    f1 = 1;
    printf("%d %d ", f0, f1);
    for (i = 1; i <= n; i++)
    {
        f = f0 + f1;
        printf("%d ", f);
        f0 = f1;
        f1 = f;
    }

    return 0;
}
