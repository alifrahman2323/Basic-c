#include <stdio.h>

int main() {
    int priceInPoisa;

    printf("Enter the price in Poisa: ");
    scanf("%d", &priceInPoisa);

    double priceInTaka = priceInPoisa / 100.0;
    printf("Equivalent price in Taka: %.2lf\n", priceInTaka);

    return 0;
}
