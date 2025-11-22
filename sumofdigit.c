#include <stdio.h>

int main() {
    int num, sum = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        rem = num % 10;   // get last digit
        sum = sum + rem;  // add it to sum
        num = num / 10;   // remove last digit
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
