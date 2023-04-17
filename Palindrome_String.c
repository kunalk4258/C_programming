#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, len, flag = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    // print the reverse of the string
    printf("Reverse of the string: ");
    for (i = len - 1; i >= 0; i--)
        printf("%c", str[i]);

    // check if the string is palindrome or not
    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            flag = 1;
            break;
        }
    }

    if (flag)
        printf("\nThe string is not a palindrome.");
    else
        printf("\nThe string is a palindrome.");

    return 0;
}
