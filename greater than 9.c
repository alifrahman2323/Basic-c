#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n >= 1 && n <= 9) {
        // If n is between 1 and 9 (inclusive), print the corresponding word
        const char* words[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        printf("%s\n", words[n - 1]);
    } else {
        // If n is greater than 9, print "Greater than 9"
        printf("Greater than 9\n");
    }

    return 0;
}
