#include <stdio.h>

int power(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    else if (exponent == 1)
    {
        return base;
    }
    else if (exponent % 2 == 0)
    {
        int temp = power(base, exponent / 2);
        return temp * temp;
    }
    else
    {
        return base * power(base, exponent - 1);
    }
}

int main()
{
    int base, exponent;
    printf("Enter the base number: ");
    scanf("%d", &base);
    printf("Enter the exponent number: ");
    scanf("%d", &exponent);

    int result = power(base, exponent);

    printf("%d^%d = %d\n", base, exponent, result);

    return 0;
}
