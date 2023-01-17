#include<stdio.h>
#include<math.h>
float hypotenuse(float a, float b )
{
    float sqr, root;
    sqr= pow(a,2)+pow(b,2);
    root=sqrt(sqr);
    return root;
}


int main()
{
    float a,b,c;
    printf("Enter side 1: ");
    scanf("%f", &a);
    printf("Enter side 2: ");
    scanf("%f", &b);
    c=hypotenuse(a,b);
    printf("hypotenuse: %.4f", c);

return 0;

}
