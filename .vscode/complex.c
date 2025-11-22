#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

int main() {
    struct Complex c1, c2, sum;

    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);

    // Adding real and imaginary parts
    sum.rea
