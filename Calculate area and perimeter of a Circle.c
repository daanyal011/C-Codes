/* Author : Daanyal*/
#include<stdio.h>
#define PI 3.14
int main()
{
    float rad, area, p;
    printf("Enter radius: ");
    scanf("%f", &rad);

    area=PI*rad*rad;
    p=2*PI*rad;

    printf("Area = %f", area);
    printf("\nPerimeter = %f", p);
    return 0;

}
