#include <stdio.h>

#define N 10

int main()
{
    int matrix[N][N];
    int i, j, k, n;
    int det = 0;

    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (k = 0; k < n - 1; k++)
    {
        for (i = k + 1; i < n; i++)
        {
            int factor = matrix[i][k] / matrix[k][k];

            for (j = k + 1; j < n; j++)
            {
                matrix[i][j] = matrix[i][j] - factor * matrix[k][j];
            }

            matrix[i][k] = 0;
        }
    }

    det = matrix[0][0];
    for (i = 1; i < n; i++)
    {
        det = det * matrix[i][i];
    }

    printf("Determinant of the matrix is %d\n", det);

    return 0;
}
