#include<stdio.h>
int main()
{
int i,sum=0;
for(i=0;i<100;i++)
{
    if(i%2!=0)
    {
        sum=sum+i;
    }

}
printf("sum of all odd numbers between 1 to 100 = %d", sum);
return 0;
}
