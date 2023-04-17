#include <stdio.h>
#include <math.h>

int isArmstrong(int num)
{
    int originalNum, remainder, result = 0, n = 0, power;

    originalNum = num;

    while (originalNum != 0)
    {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    while (originalNum != 0)
    {
        remainder = originalNum % 10;

        power = round(pow(remainder, n));

        result += power;

        originalNum /= 10;
    }

    if (result == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Error: invalid input\n");
        return 1;
    }

    if (isArmstrong(num))
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
