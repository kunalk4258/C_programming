#include <stdio.h>

int main()
{
    int num, reverseNum = 0, remainder, originalNum;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0)
    {
        remainder = num % 10;
        reverseNum = reverseNum * 10 + remainder;
        num /= 10;
    }

    printf("Reverse of %d is %d.\n", originalNum, reverseNum);

    if (originalNum == reverseNum)
    {
        printf("%d is a palindrome number.\n", originalNum);
    }
    else
    {
        printf("%d is not a palindrome number.\n", originalNum);
    }

    return 0;
}
