#include <stdio.h>
struct book_details
{
    char title[50];
    char author[50];
    int price;
};
int main()
{
    struct book_details book[10], temp;
    int i, j;
    for (i = 0; i < 10; i++)
    {
        printf("BOOK %d\n", i + 1);
        printf("Enter title: ");
        scanf("%s", book[i].title);
        printf("Enter author name: ");
        scanf("%s", book[i].author);
        printf("Enter price: ");
        scanf("%d", &book[i].price);
        printf("\n");
    }

    for (i = 0; i < 10 - 1; i++)
    {
        for (j = 0; j < 10 - 1; j++)
        {
            if (book[j].price > book[j + 1].price)
            {
                temp = book[j];
                book[j] = book[j + 1];
                book[j + 1] = temp;
            }
        }
    }
    printf("\nAll the books in ascending order of price\n");
    for (i = 0; i < 10; i++)
    {
        printf("Title:%s \n", book[i].title);
        printf("Author name: %s \n", book[i].author);
        printf("Price: %d \n", book[i].price);
        printf("\n");
    }
    return 0;
}
