#include <stdio.h>
#include <string.h>

#define NO_OF_CHARS 256

char getNonRepeatingChar(char *str)
{
    int count[NO_OF_CHARS] = {0};
    int i;

    for (i = 0; str[i]; i++)
    {
        count[str[i]]++;
    }

    for (i = 0; str[i]; i++)
    {
        if (count[str[i]] == 1)
        {
            return str[i];
        }
    }

    return '\0';
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    char result = getNonRepeatingChar(str);
    if (result)
    {
        printf("Non-repeating character: %c\n", result);
    }
    else
    {
        printf("No non-repeating character found.\n");
    }

    return 0;
}
