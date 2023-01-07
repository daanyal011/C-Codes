#include <stdio.h>
int scan_array(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
}

int print_array(int arr[], int n)
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

int sort_array(int a[], int n)
{
    int i, temp, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
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
    printf("Enter elements in array: \n");
    scan_array(a, n);
    printf("Entered array: \n");
    print_array(a, n);
    printf("\nLargest element in array: ");
    sort_array(a, n);
    printf("%d", a[n - 1]);

    return 0;
}
