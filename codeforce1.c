#include <stdio.h>
#include <stdbool.h>

#define MAX_N 100

void solve_test_case() {
    int n;
    scanf("%d", &n);

    bool reachability[MAX_N + 1][MAX_N + 1] = {false};

    // Determine reachability for all pairs (i, j) where 1 <= i < j <= n
    for (int i = 1; i <= n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            printf("? %d %d\n", i, j);
            fflush(stdout);

            char response[4];
            scanf("%s", response);

            if (response[0] == 'Y') {
                reachability[j][i] = true;
            } else {
                reachability[j][i] = false;
            }
        }
    }

    int colors[MAX_N + 1];
    // Assume all vertices are initially of the same color
    for (int i = 1; i <= n; ++i) {
        colors[i] = 0;
    }

    // Adjust colors based on reachability
    for (int i = 1; i <= n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            if (!reachability[j][i]) {
                // If j is not reachable from i, color them differently
                colors[j] = !colors[i];
            }
        }
    }

    // Output the final colors
    printf("! ");
    for (int i = 1; i <= n; ++i) {
        printf("%d ", colors[i]);
    }
    printf("\n");
    fflush(stdout);
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; ++i) {
        solve_test_case();
    }

    return 0;
}
