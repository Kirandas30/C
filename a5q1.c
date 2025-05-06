//5a(1)
#include <stdio.h>

void calculateCheckDigit(int upc[12], int *checkDigit) {
    int sumOdd = 0, sumEven = 0;
    for (int i = 0; i < 11; i++) {
        if (i % 2 == 0) sumOdd += upc[i];  // Odd positions (1st, 3rd, 5th, ...)
        else sumEven += upc[i];            // Even positions (2nd, 4th, 6th, ...)
    }
    sumOdd *= 3;  // Multiply sum of odd positions by 3
    int totalSum = sumOdd + sumEven;
    
     *checkDigit = (10 - totalSum % 10) % 10;  // Calculate check digit
}

int main() {
    int upc[12], checkDigit;
    printf("Enter the 12 digits of the barcode separated by spaces: ");
    for (int i = 0; i < 12; i++) scanf("%d", &upc[i]);
    
    calculateCheckDigit(upc, &checkDigit);
    
    if (checkDigit == upc[11]) {
        printf("Barcode: ");
        for (int i = 0; i < 12; i++) printf("%d ", upc[i]);
        printf("- validated.\n");
    } else {
        printf("Barcode: ");
        for (int i = 0; i < 12; i++) printf("%d ", upc[i]);
        printf("- error in barcode.\n");
    }
    return 0;
}
