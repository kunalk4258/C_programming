#include <stdio.h>

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: cannot compute factorial of negative number\n");
        return 1;
    }

    int result = factorial(n);
    printf("%d! = %d\n", n, result);

    return 0;
}
