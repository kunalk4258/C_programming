#include <stdio.h>

struct Distance
{
    int feet;
    float inch;
};

struct Distance add(struct Distance d1, struct Distance d2);

int main()
{
    struct Distance d1, d2, sum;

    printf("Enter first distance in feet and inches:\n");
    scanf("%d %f", &d1.feet, &d1.inch);

    printf("Enter second distance in feet and inches:\n");
    scanf("%d %f", &d2.feet, &d2.inch);

    sum = add(d1, d2);

    printf("Sum of distances = %d'%.2f\"\n", sum.feet, sum.inch);

    return 0;
}

struct Distance add(struct Distance d1, struct Distance d2)
{
    struct Distance result;

    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;

    if (result.inch >= 12.0)
    {
        result.inch = result.inch - 12.0;
        result.feet++;
    }

    return result;
}
