#include <stdio.h>
#include <string.h>

int main() {
    char num[50];
    int isFloat = 0;

    printf("Enter a number: ");
    scanf("%s", num);

    // Check for decimal point
    for (int i = 0; num[i] != '\0'; i++) {
        if (num[i] == '.') {
            isFloat = 1;
            break;
        }
    }

    if (isFloat)
        printf("Input is a float number");
    else
        printf("Input is an integer number");

    return 0;
}
