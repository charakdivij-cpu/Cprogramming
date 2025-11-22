#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    int i;

    if (n <= 1)
        return 0;

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime pairs whose sum is %d:\n", num);

    int found = 0;

    // Check all pairs (i, num-i)
    for (i = 2; i <= num / 2; i++) {
        if (i
