/*Aim: WAP to find the body mass index of the user
Author:Daanyal*/
#include <stdio.h>
int main()
{
    float height, weight, bmi;
    printf("Enter your height in meters: ");
    scanf("%f", &height);
    
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    bmi = weight / (height * height);

    printf("Your BMI is %f\n",bmi);

    if (bmi < 16)
    {
        printf("\n You are Severe Thinness");
    }
    else if (bmi <= 17)
    {
        printf("\n You are Moderate Thinness");
    }
    else if (bmi <= 18.5)
    {
        printf("\n You are Mild Thinness");
    }

    else if (bmi <= 25)
    {
        printf("\n You are Normal  ");
    }

    else if (bmi <= 30)
    {
        printf("\n You are Overweight ");
    }
    else if (bmi <= 35)
    {
        printf("\n You are Obese Class I  ");
    }
    else if (bmi <= 40)
    {
        printf("\n You are Obese Class II  ");
    }

    else if (bmi > 40)
    {
        printf("\n You are Obese Class III");
    }

    return 0;
}