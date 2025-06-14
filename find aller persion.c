#include <stdio.h>

int main() {
    double height1, height2;

    printf("Enter the height of person 1 (in meters): ");
    scanf("%lf", &height1);
    printf("Enter the height of person 2 (in meters): ");
    scanf("%lf", &height2);

    if (height1 > height2) {
        printf("Person 1 is taller.\n");
    } else if (height1 < height2) {
        printf("Person 2 is taller.\n");
    } else {
        printf("Both persons have the same height.\n");
    }

    return 0;
}
