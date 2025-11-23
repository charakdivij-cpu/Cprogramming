#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Enter elements of first array:\n");
    for (int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);


    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2];

    printf("Enter elements of second array:\n");
    for (int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);


    int sum = 0;
    
    // Sum of first array
    for (int i = 0; i < n1; i++)
        sum += arr1[i];

    // Sum of second array
    for (int i = 0; i < n2; i++)
        sum += arr2[i];

    int total = n1 + n2;
    float avg = (float) sum / total;

    printf("Average of all elements = %.2f", avg);

    return 0;
}
