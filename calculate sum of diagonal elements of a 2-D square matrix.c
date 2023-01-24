#include <stdio.h>
void scan_array(int a[][20], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter element %d,%d:", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
}
void print_array(int a[][20], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
}
int sum(int arr[][20], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i][i];
    }
    return sum;
}
int main()
{
    int a[20][20], n;
    printf("Enter the size of matrix: ");
    scanf("%d", &n);
    printf("Enter the elements in matrix: \n");
    scan_array(a, n);
    printf("Entered matrix: \n");
    print_array(a, n);
    printf("Sum of diagonal elements: %d", sum(a, n));

    return 0;
}
