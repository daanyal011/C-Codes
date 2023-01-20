#include <stdio.h>
#include <string.h>
struct address
{
    char street[50];
    char landmark[50];
    float pincode;
};
typedef struct address address;
struct employee
{
    char name[50];
    char id[50];
    float salary;
    char doj[50];
    address addrss;
};
int main()
{
    // struct address adresss;
    struct employee emp[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Employee %d \n", i + 1);
        printf("Enter employee name: ");
        scanf("%s", emp[i].name);
        printf("Enter employee id: ");
        scanf("%s", emp[i].id);
        printf("Enter employee salary: ");
        scanf("%f", &emp[i].salary);
        printf("Enter employee Date of joining: ");
        scanf("%s", emp[i].doj);
        printf("Enter address of employee\n");
        printf("Enter street: ");
        scanf("%s", emp[i].addrss.street);
        printf("Enter landmark:");
        scanf("%s", emp[i].addrss.landmark);
        printf("Enter pin code: ");
        scanf("%f", emp[i].addrss.pincode);
        printf("\n");
    }

    for (i = 0; i < 10; i++)
    {
        printf("Employee %d :", i + 1);
        printf("Employee name: %s\n", emp[i].name);
        printf("  ID: %s ", emp[i].id);
        printf("salary:%f ", emp[i]);
        printf("Date of joining:%s ", emp[i].salary);
        printf("Address of employee\n");
        printf("Street: %s ", emp[i].addrss.street);
        printf("landmark: %s", emp[i].addrss.landmark);
        printf("pin code:%f", emp[i].addrss.pincode);
    }
    return 0;
}
