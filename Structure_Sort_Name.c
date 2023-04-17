#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    int i, j, n;
    struct student temp, s[100];

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter name, roll number and marks for student %d: ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(s[i].name, s[j].name) > 0)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nStudent Information Sorted by Name:\n");
    for (i = 0; i < n; i++)
    {
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Marks: %.2f\n", s[i].marks);
        printf("\n");
    }

    return 0;
}
