#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int table;
    printf("Enter a number: ");
    scanf("%d", &table);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", table, i, table * i);
    }

    return 0;
}