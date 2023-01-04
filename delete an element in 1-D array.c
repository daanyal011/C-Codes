#include <stdio.h>
void scan_array(int arr[20], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
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
void del_element(int arr[], int n, int del)
{
    int i;
    for (i = del - 1; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
}
int main()
{
    int a[20], n, del;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements in array: \n");
    scan_array(a, n);
    printf("The entered array: ");
    print_array(a, n);
    printf("\n Enter the index of the element to be deleted: ");
    scanf("%d", &del);
    del_element(a, n, del);
    n--;
    print_array(a, n);

    return 0;
}
