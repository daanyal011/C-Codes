#include <stdio.h>
int square(int a)
{
    int sqre;
    sqre = a * a;
    return sqre;
}
int main()
{
    int n, sqr;
    printf("Enter number to find square of number: ");
    scanf("%d", &n);
    printf("square of %d = %d", n, square(n));

    return 0;
}
