#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    system("cls");
    printf("Enter the number how many table you want: ");
    scanf("%d", &n);
    int mul[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter table: ");
        scanf("%d", &mul[i]);
    }

    int arr[n][10];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j + 1);
        }
    }


    for (int i = 0; i < n; i++)
    {
        printf("\nThe table of %d\n", mul[i]);
        for (int j = 0; j < 10; j++)
        {
            printf("%d x %d = %d\n", mul[i], j + 1, arr[i][j]);
        }
    }

    getchar();
    printf("\nPress Enter key to exit");
    getchar();
    return 0;
}
