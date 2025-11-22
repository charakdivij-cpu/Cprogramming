#include <stdio.h>

// Recursive function to calculate sum
int sum(int n) {
    if (n == 0)
        return 0;           // base case
    else
        return n + sum(n - 1);  // recursive step
}

int main() {
    int n;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    printf("Sum of natural numbers = %d", sum(n));

    return 0;
}
