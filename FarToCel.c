#include <stdio.h>

int main()
{
    float fahrenheit, celsius;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("%f F is equal to %f C\n", fahrenheit, celsius);
    return 0;
}