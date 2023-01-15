/* Aim : WAP to print the following pattern.
*
**
***
****
******
Author :Daanyal*/
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("enter limit for series: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*Output:enter limit for series: 5
 *
 **
 ***
 ****
 *****
 */
