#include <stdio.h>
#include <ctype.h>

#define MAX_NAME_LENGTH 100

int main()
{
    char name[MAX_NAME_LENGTH];
    int i;

    printf("Enter your full name: ");
    fgets(name, MAX_NAME_LENGTH, stdin);

    printf("Your initials are: ");

    for (i = 0; name[i] != '\0'; i++)
    {
        if (i == 0 || name[i - 1] == ' ')
        {
            printf("%c", toupper(name[i]));
        }
    }

    printf("\n");

    return 0;
}
