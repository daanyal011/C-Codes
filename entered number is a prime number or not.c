/* Aim: WAP to find if the entered number is a prime number or not.
Author: Daanyal*/
#include <stdio.h>
int main()
{
    int a, i, flag = 0;

    scanf("%d", &a);

    for (i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (a <= 1)
    {
        printf("number is neither a prime not an odd\n");
    }
    if (flag == 1)
        printf("The number is not a Prime Number");
    else
        printf("The number is a Prime Number");

    return 0;
}
