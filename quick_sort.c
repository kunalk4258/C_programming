#include <stdio.h>

int travel(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high - 1;
    int temp;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}

void quickSort(int A[], int low, int high)
{
    int partitionindex;
    if (low < high)
    {
        partitionindex = partition(A, low, high);
        quickSort(A, low, partitionindex - 1);
        quickSort(A, partitionindex + 1, high);
    }
}
int main()
{
    int A[] = {13, 15, 1, 6, 2, 99, 10,16,1};
    int n = 9;
    travel(A, n);
    quickSort(A, 0, n - 1);
    travel(A, n);
    return 0;
}