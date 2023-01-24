/* Aim:Write a program in C to sort elements of the
array in ascending order.
Author: Daanyal*/
#include <stdio.h>
void scan_array(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("enter  element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
void print_array(int arr[], int n)
{
    int i;

    printf("[");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i < n - 1)
        {
            printf(",");
        }
    }
    printf("]");
}
void sort_array(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < (n - i) - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main()
{
    int a[100], n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    scan_array(a, n);
    printf("original array: ");
    print_array(a, n);
    sort_array(a, n);
    printf("\nSorted array: ");
    print_array(a, n);
    return 0;
}
/* Output: Enter the number of elements: 5
enter  element 1: 8
enter  element 2: 7
enter  element 3: 15
enter  element 4: 2
enter  element 5: 11
original array: [8,7,15,2,11]
Sorted array: [2,7,8,11,15]*/
