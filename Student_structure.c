#include <stdio.h>

struct student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    struct student s;

    printf("Enter information of a student:\n");

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nDisplaying Information of Student:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
