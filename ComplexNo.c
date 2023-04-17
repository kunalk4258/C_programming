#include <stdio.h>

typedef struct
{
    float real;
    float imag;
} complex;

int main()
{
    complex num1, num2, sum;

    printf("Enter the real and imaginary parts of the first complex number:\n");
    scanf("%f %f", &num1.real, &num1.imag);

    printf("Enter the real and imaginary parts of the second complex number:\n");
    scanf("%f %f", &num2.real, &num2.imag);

    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;

    printf("The sum of the two complex numbers is: %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}
