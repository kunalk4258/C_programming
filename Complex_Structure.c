#include <stdio.h>

struct complex
{
    float real;
    float imag;
};

struct complex add(struct complex a, struct complex b);

int main()
{
    struct complex num1, num2, result;

    printf("Enter the first complex number:\n");
    printf("Real part: ");
    scanf("%f", &num1.real);
    printf("Imaginary part: ");
    scanf("%f", &num1.imag);

    printf("Enter the second complex number:\n");
    printf("Real part: ");
    scanf("%f", &num2.real);
    printf("Imaginary part: ");
    scanf("%f", &num2.imag);

    result = add(num1, num2);

    printf("Sum = %.1f + %.1fi", result.real, result.imag);

    return 0;
}

struct complex add(struct complex a, struct complex b)
{
    struct complex result;

    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;

    return result;
}
