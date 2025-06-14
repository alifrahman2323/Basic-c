#include <stdio.h>

int main() {
    // Declare variables to store binary and decimal numbers, remainder, quotient, and an array for octal digits
    int binnum, binnum1, rem, decnum = 0, quot, i = 1, j;
    int octnum[100];

    // Prompt the user to input a binary number
    printf("Input a Binary Number: ");
    scanf("%d", &binnum);
    binnum1 = binnum;

    // Convert the binary number to decimal
    while (binnum > 0) {
        rem = binnum % 10; // Get the last digit of the binary number
        decnum = decnum + rem * i; // Convert it to decimal
        i = i * 2; // Update the position value (2^n)
        binnum = binnum / 10; // Remove the last digit from the binary number
    }

    i = 1; // Reset i for octal conversion
    quot = decnum; // Store the decimal number in quot

    // Convert the decimal number to octal
    while (quot > 0) {
        octnum[i++] = quot % 8; // Store the remainder when divided by 8
        quot = quot / 8; // Update quotient
    }

    // Display the equivalent octal value of the original binary number
    printf("Equivalent Octal Value of %d is: ", binnum1);
    for (j = i - 1; j > 0; j--) { // Print octal number in reverse order
        printf("%d", octnum[j]);
    }
    printf("\n");

    return 0;
}
