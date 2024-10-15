#include <stdio.h>

int main()
{
    int n;
    FILE *fptr;
    system("cls"); // For Windows
    // system("clear"); // For UNIX based operating system
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

    fptr = fopen("table.txt", "w");
    for (int i = 0; i < n; i++)
    {
        printf("\nThe table of %d\n", mul[i]);
        fprintf(fptr, "The table of %d\n", mul[i]);
        for (int j = 0; j < 10; j++)
        {
            printf("%d x %d = %d\n", mul[i], j + 1, arr[i][j]);
            fprintf(fptr, "%d x %d = %d\n", mul[i], j + 1, arr[i][j]);
        }
        fprintf(fptr, "\n");
    }

    fclose(fptr);

    getchar();
    printf("\nPress Enter key to exit");
    getchar();

    return 0;
}
