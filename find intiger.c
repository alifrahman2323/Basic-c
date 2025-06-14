#include <stdio.h>
int main() {
    int x, y, temp, i, sum=0;

    // Prompt for user input
    printf("\nInput the first integer: ");
    scanf("%d", &x);
    printf("\nInput the second integer: ");
    scanf("%d", &y);

    // Swap values if x is greater than y
    if(x > y) {
        temp = y;
        y = x;
        x = temp;
    }

    // Iterate through numbers between x and y (exclusive)
    for(i = x+1; i < y; i++) {
        // Check if the number modulo 7 is 2 or 3
        if((i%7) == 2 || (i%7) == 3) {
            printf("%d\n", i);
        }
    }

    return 0;
}
