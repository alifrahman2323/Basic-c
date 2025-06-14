#include <stdio.h>

int main() {
    // Declare variables for grades
    double grade_A, grade_B, grade_C;

    // Read three floating-point values
    scanf("%lf", &grade_A);
    scanf("%lf", &grade_B);
    scanf("%lf", &grade_C);

    // Calculate the weighted average
    double weighted_average = (grade_A * 2 + grade_B * 3 + grade_C * 5) / (2 + 3 + 5);

    // Print the result with one decimal place
    printf("MEDIA = %.1lf\n", weighted_average);

    return 0;
}
