#include <stdio.h>

int main() {
    float num1, num2, result;

    printf("Enter two floating point numbers: ");
    scanf("%f %f", &num1, &num2);

    result = num1 * num2;

    printf("Product = %.2f", result);

    return 0;
}
