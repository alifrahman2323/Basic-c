#include <stdio.h>

int main() {
    int dec_num = 0, quot, i = 1, j;
    int bin_num[100];

    printf("Input a decimal number : ");
    scanf("%d", &dec_num);

    quot = dec_num;

    while (quot != 0) {
        bin_num[i++] = quot % 2;
        quot = quot / 2;
    }

    printf("Binary number is : ");
    for (j = i - 1; j > 0; j--) {
        printf("%d", bin_num[j]);
    }
    printf("\n");

    return 0;
}
