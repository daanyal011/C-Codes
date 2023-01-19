/*Aim:Design a structure student_record to contain name,
roll_number, and total marks obtained. Write a program to
read 10 students data from the user and then display the
first three toppers on the screen
Author: Daanyal Parbulkar  */
#include <stdio.h>
struct student_record
{
    char name[50];
    int roll_no;
    float marks;
};
int main()
{
    struct student_record student[10], temp;
    int i, j;

    printf("Enter student details: \n");
    for (i = 0; i < 10; i++)
    {
        printf("Student %d: \n", i + 1);
        printf("Name: ");
        scanf("%s", student[i].name);
        printf("Roll no: ");
        scanf("%d", &student[i].roll_no);
        printf("Marks: ");
        scanf("%f", &student[i].marks);
        printf("\n");
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10 - 1; j++)
        {
            if (student[j].marks < student[j + 1].marks)
            {
                temp = student[j];
                student[j] = student[j + 1];
                student[j + 1] = temp;
            }
        }
    }
    printf("First Three toppers: \n");
    printf("Topper 1: %s \n", student[0].name);
    printf("Topper 2: %s \n", student[1].name);
    printf("Topper 2: %s \n", student[2].name);

    return 0;
}
