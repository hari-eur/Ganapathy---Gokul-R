#include <stdio.h>

int main()
{
    int n, m;

    printf("n = ");
    scanf("%d", &n);

    printf("m = ");
    scanf("%d", &m);

    printf("Matrix:\n");
    int matrix[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    printf("Output:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != 0 && matrix[i][j] == m)
            {
                matrix[i][j] = matrix[i - 1][j];
            }

            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}