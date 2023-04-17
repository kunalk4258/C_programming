#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, len;
    char temp;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);
    printf("Length of the string: %d\n", len);

    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - i - 1; j++)
        {
            if (str[j] > str[j + 1])
            {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    printf("Sorted string: %s\n", str);

    return 0;
}
