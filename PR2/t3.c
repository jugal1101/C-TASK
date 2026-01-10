#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;   // get last digit

    // find first digit
    while (num >= 10) {
        num = num / 10;
    }
    firstDigit = num;

    printf("First Digit = %d\n", firstDigit);
    printf("Last Digit = %d\n", lastDigit);
    printf("Sum of First and Last Digit = %d\n", firstDigit + lastDigit);

    return 0;
}
