#include <stdio.h>

int main()
{
    int num, i, is_prime = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            is_prime = 0;
            break;
        }
    }

    if (is_prime == 1)
        printf("%d is a prime number.", num);
    else
        printf("%d is not a prime number.", num);

    return 0;
}
