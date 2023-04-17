#include <stdio.h>
#define MAX_SIZE 10

int main()
{
    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE];
    int rows1, cols1, rows2, cols2, i, j, equal = 1;

    printf("Enter the number of rows and columns of matrix 1: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the elements of matrix 1: \n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the number of rows and columns of matrix 2: ");
    scanf("%d %d", &rows2, &cols2);

    printf("Enter the elements of matrix 2: \n");
    for (i = 0; i < rows2; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    if (rows1 != rows2 || cols1 != cols2)
    {
        equal = 0;
    }
    else
    {
        for (i = 0; i < rows1; i++)
        {
            for (j = 0; j < cols1; j++)
            {
                if (matrix1[i][j] != matrix2[i][j])
                {
                    equal = 0;
                    break;
                }
            }
            if (equal == 0)
            {
                break;
            }
        }
    }

    if (equal == 1)
    {
        printf("Matrices are equal\n");
    }
    else
    {
        printf("Matrices are not equal\n");
    }

    return 0;
}
