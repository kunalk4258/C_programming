#include <stdio.h>

int main()
{
    int hours, minutes, seconds;

    printf("Enter hours: ");
    scanf("%d", &hours);

    minutes = hours * 60;
    seconds = hours * 3600;

    printf("%d hours = %d minutes = %d seconds\n", hours, minutes, seconds);

    return 0;
}
