#include<stdio.h>
void scan_array(int arr[20],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
}
void print_array(int a[20], int n)
{
    int i;
    printf("[");
    for(i=0;i<n;i++)
    {
        printf("%d", a[i]);
        if(i<n-1)
        {
            printf(",");
        }
    }
    printf("]");
}

int main()
{
  int a[20],b[20],c[20],n;
  printf("Enter the number of elements in array: ");
  scanf("%d", &n);
  printf("Enter the elements in array: \n");
  scan_array(a,n);
  printf("Entered elements are: ");
  print_array(a,n);
   int i,j=0,k=0;
    for(i=0;i<n;i++)
    {
        if (a[i]%2==0)
         {
            b[j]=a[i];
            j++;
         }
        else
        {
            c[k]=a[i];
            k++;
        }
    }

  printf("\n Array of even elements: \n");
  print_array(b,j);
  printf("\n Array of odd elements: \n");
  print_array(c,k);

   return 0;

}
