#include <stdio.h>

int main() {
    long long binaryNumber;
    int octalNumber = 0, decimalNumber = 0, base = 1;

    
    printf("Enter a binary number: ");
    scanf("%lld", &binaryNumber);

    
    while (binaryNumber != 0) {
        decimalNumber += (binaryNumber % 10) * base;
        binaryNumber /= 10;
        base *= 2;
    }

    
    base = 1;
    while (decimalNumber != 0) {
        octalNumber += (decimalNumber % 8) * base;
        decimalNumber /= 8;
        base *= 10;
    }

    
    printf("Octal equivalent: %d\n", octalNumber);

    return 0;
}

