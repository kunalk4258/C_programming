#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *fp;
    struct student s;

    fp = fopen("students.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    fwrite(&s, sizeof(struct student), 1, fp);

    fclose(fp);

    fp = fopen("students.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fread(&s, sizeof(struct student), 1, fp);
    printf("Name: %s\n", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);

    fclose(fp);

    return 0;
}
