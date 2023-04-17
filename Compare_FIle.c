#include <stdio.h>

int main()
{
    FILE *file1, *file2;
    char ch1, ch2;
    int pos = 1, line = 1;

    file1 = fopen("file1.txt", "r");
    file2 = fopen("file2.txt", "r");

    if (file1 == NULL || file2 == NULL)
    {
        printf("Error: Unable to open file.\n");
        return 0;
    }

    while ((ch1 = fgetc(file1)) != EOF && (ch2 = fgetc(file2)) != EOF)
    {
        if (ch1 != ch2)
        {
            printf("Files are different at position %d on line %d.\n", pos, line);
            break;
        }

        if (ch1 == '\n' && ch2 == '\n')
            line++;

        pos++;
    }

    if (ch1 == EOF && ch2 == EOF)
        printf("Files are identical.\n");
    else if (ch1 == EOF)
        printf("End of file1 reached while file2 has more data.\n");
    else if (ch2 == EOF)
        printf("End of file2 reached while file1 has more data.\n");

    fclose(file1);
    fclose(file2);

    return 0;
}
