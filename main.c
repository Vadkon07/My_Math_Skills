#include <stdlib.h>
#include <stdio.h>

int main() {
    int base, up, result;
    int i;

    printf("Input Base Value: ");
    scanf("%d", &base);
    printf("Base is: %d \n", base);

    printf("Input Up Value: ");
    scanf("%d", &up);
    printf("Exponent is: %d \n", up);

    result = base;

    // Use a loop to multiply the base value 'up-1' times
    for (i = 1; i < up; i++) {
        result *= base;
    }

    printf("Result is: %d\n", result);

    return 0;
}

