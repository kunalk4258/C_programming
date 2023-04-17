#include <stdio.h>
int main()
{
    int arr1[50], arr2[50], merged[100], size1, size2, size, i, j, k;

    printf("Enter the size of the first array : ");
    scanf("%d", &size1);

    printf("Enter the elements of the first array : ");
    for (i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array : ");
    scanf("%d", &size2);

    printf("Enter the elements of the second array : ");
    for (i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    size = size1 + size2;

    for (i = 0; i < size1; i++)
    {
        merged[i] = arr1[i];
    }

    for (i = 0, k = size1; k < size && i < size2; i++, k++)
    {
        merged[k] = arr2[i];
    }

    printf("\nMerged array : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}
