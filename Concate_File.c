#include <stdio.h>

int main()
{
    FILE *source_file, *destination_file;
    char ch;

    source_file = fopen("source_file.txt", "r");
    destination_file = fopen("destination_file.txt", "w");

    if (source_file == NULL || destination_file == NULL)
    {
        printf("Error: Unable to open file.\n");
        return 0;
    }

    while ((ch = fgetc(source_file)) != EOF)
    {
        fputc(ch, destination_file);
    }

    printf("File copied successfully.\n");

    fclose(source_file);
    fclose(destination_file);

    return 0;
}
