/* Aim:Write a program in C for multiplication of two
square Matrices
Author: Daanyal */
#include <stdio.h>
int scan_array(int arr[][20], int n)
{
  int i, j;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("Enter element %d,%d: ", i + 1, j + 1);
      scanf("%d", &arr[i][j]);
    }
  }
}
int print_array(int a[][20], int n)
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
int mul_array(int a[][20], int b[][20], int ans[][20], int n)
{
  int i, j, k;

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      ans[i][j] = 0;
      for (k = 0; k < n; k++)
      {
        ans[i][j] += a[i][k] * b[k][j];
      }
    }
  }
}

int main()
{
  int a[20][20], b[20][20], c[20][20];
  int n, i;
  printf("Enter size of square matrix: ");
  scanf("%d", &n);
  printf("Enter elements of A matrix: \n");
  scan_array(a, n);
  printf("Enter elements of B matrix: \n");
  scan_array(b, n);
  printf("A matrix: \n");
  print_array(a, n);
  printf("B matrix: \n");
  print_array(b, n);
  printf("multiplication of matrix: \n");
  mul_array(a, b, c, n);
  print_array(c, n);

  return 0;
}
/* Output : Enter size of square matrix: 3
Enter elements of A matrix:
Enter element 1,1: 1
Enter element 1,2: 5
Enter element 1,3: 4
Enter element 2,1: 3
Enter element 2,2: 7
Enter element 2,3: 8
Enter element 3,1: 10
Enter element 3,2: 11
Enter element 3,3: 5
Enter elements of B matrix:
Enter element 1,1: 7
Enter element 1,2: 5
Enter element 1,3: 3
Enter element 2,1: 1
Enter element 2,2: 2
Enter element 2,3: 4
Enter element 3,1: 8
Enter element 3,2: 11
Enter element 3,3: 7
A matrix:
        1       5       4
        3       7       8
        10      11      5
B matrix:
        7       5       3
        1       2       4
        8       11      7
multiplication of matrix:
        44      59      51
        92      117     93
        121     127     109*/
