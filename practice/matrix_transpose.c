#include <stdio.h>

int main()
{
    int row, col;
    printf("Row: ");
    scanf("%d", &row);
    printf("Col: ");
    scanf("%d", &col);

    int mat[row][col];
    printf("Elements: \n");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &mat[i][j]);

    int trans[col][row];
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            trans[j][i] = mat[i][j];

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
            printf("%d ", trans[i][j]);
        printf("\n");
    }

    return 0;
}