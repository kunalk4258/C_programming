#include <stdio.h>

#define ROWS 100
#define COLS 100

int main()
{
    int matrix1[ROWS][COLS], matrix2[ROWS][COLS], sum[ROWS][COLS];
    int i, j, rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    printf("Sum of the matrices:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
