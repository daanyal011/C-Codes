/*Aim:Write a program in C to check if
the entered string is palindrome or not
Author: Daanyal  */
#include <stdio.h>
#include <string.h>
int main()
{
    char a[20], a_rev[20];
    printf("Enter string: ");
    gets(a);

    strcpy(a_rev, a);
    strrev(a_rev);
    if (strcmp(a, a_rev) == 0)
    {
        printf("The given string is palindrome");
    }
    else
    {
        printf("The given string is not palindrome ");
    }
    return 0;
}
/* Output: Enter string: racecar
The given string is palindrome*/
