#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void print_fibonacci(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Error: invalid input\n");
        return 1;
    }

    printf("Fibonacci series up to %d: ", n);
    print_fibonacci(n);

    return 0;
}
