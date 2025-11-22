#include <stdio.h>

int main() {
    int num, start, end, temp, rem, rev;

    printf("Enter start number: ");
    scanf("%d", &start);

    printf("Enter end number: ");
    scanf("%d", &end);

    printf("Palindrome numbers between %d and %d are:\n", start, end);

    for (num = start; num <= end; num++) {
        temp = num;
        rev = 0;

        while (temp != 0) {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }

        if (rev == num) {
            printf("%d ", num);
        }
    }

    return 0;
}
