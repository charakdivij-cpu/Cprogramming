#include <stdio.h>

int main() {
    int num, original, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;   // store original number

    while (num != 0) {
        rem = num % 10;        // last digit
        sum = sum + (rem * rem * rem); // cube of digit
        num = num / 10;        // remove last digit
    }

    if (sum == original)
        printf("%d is an Armstrong number.", original);
    else
        pri
