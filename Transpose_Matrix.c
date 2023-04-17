#include <stdio.h>

#define ROWS 100
#define COLS 100

int main()
{
    int matrix[ROWS][COLS], transpose[ROWS][COLS];
    int rows, cols, i, j;

    printf("Enter number of rows and columns of matrix: ");
    scanf("%d%d", &rows, &cols);

    // Input matrix
    printf("Enter elements of matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Transpose matrix
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print transpose matrix
    printf("\nTranspose of matrix:\n");
    for (i = 0; i < cols; i++)
    {
        for (j = 0; j < rows; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
