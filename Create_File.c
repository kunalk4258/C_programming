#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;

    fp = tmpfile();

    if (fp == NULL)
    {
        printf("Error creating temporary file\n");
        exit(1);
    }

    fprintf(fp, "This is a temporary file\n");

    fclose(fp);

    return 0;
}
