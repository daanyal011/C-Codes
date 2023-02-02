#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

int isFull();
int isEmpty();
void push(int);
void pop();
void display();

int main()
{
    int value, choice;
    //    printf("*****MENU*****\n");
    //     printf(" 1.push\ 2.pop \n 3.display \n 4.exit");n

    while (1)
    {
        printf("\n*****MENU*****\n");
        printf(" 1.push\n 2.pop \n 3.display \n 4.exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter value to be pushed: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();

        case 3:
            display();
        case 4:
            return 0;
        default:
            printf("WRONG choice!!!!!!!");
            break;
        }
    }
    return 0;
}

int isFull()
{
    if (top == SIZE - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(int x)
{
    if (isFull())
    {
        printf("\n Stack is FULL");
    }
    else
    {
        top++;
        stack[top] = x;
        printf("value pushed = %d", x);
    }
}
void pop()
{
    int val;
    if (isEmpty())
    {
        printf("\nStack is empty");
    }
    else
    {
        top--;
        val = stack[top];
        printf("The value popped= %d", val);
    }
}
void display()
{
    int i;
    if (isEmpty())
    {
        printf("\nStack is empty");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("\t %d", stack[i]);
        }
    }
}
