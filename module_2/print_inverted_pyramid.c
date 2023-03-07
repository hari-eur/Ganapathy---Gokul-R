#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = rows; i > 0; i--)
    {
        for (int j = 0; j < rows - i; j++)
            printf("  ");

        for (int k = 0; k < i * 2 - 1; k++)
            printf("* ");

        printf("\n");
    }
    return 0;
}
