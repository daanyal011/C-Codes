/* Aim : WAP to check if the year entered is a leap year or not.
Author : Daanyal
*/
#include <stdio.h>
int main()
{
    int a;

    scanf("%d", &a);

    if ((a % 400 == 0) | (a % 4 == 0 && a % 100 != 0))
    {
        printf("Its a Leap Year");
    }
    else
    {
        printf("The Year is Not a Leap Year");
    }
    return 0;
}
