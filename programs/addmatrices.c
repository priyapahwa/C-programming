#include <stdio.h>

int main()
{
    int row, col;
    int a[20][20], b[20][20], sum[20][20], i, j;
    printf("Enter number of rows: \n");
    scanf("%d", &row);
    printf("Enter number of columns: \n");
    scanf("%d", &col);

    printf("Enter Elements of Matrix 1: \n");
    for (i = 0; i < row; ++i)
        for (j = 0; j < col; ++j)
        {
            printf("Enter element a%d%d: \n", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    printf("Enter Elements of Matrix 2: \n");
    for (i = 0; i < row; ++i)
        for (j = 0; j < col; ++j)
        {
            printf("Enter element b%d%d: \n", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    for (i = 0; i < row; ++i)
        for (j = 0; j < col; ++j)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }

    printf("\nSum of two matrices: \n");
    for (i = 0; i < row; ++i)
        for (j = 0; j < col; ++j)
        {
            printf("%d   ", sum[i][j]);
            if (j == col - 1)
            {
                printf("\n\n");
            }
        }
    return 0;
}