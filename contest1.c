#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);

        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }


        int freq[x + 1] = {0};
        for (int i = 0; i < n; i++) {
            freq[a[i]]++;
        }


        int max_freq = 0;
        for (int i = 1; i <= x; i++) {
            if (freq[i] > max_freq) {
                max_freq = freq[i];
            }
        }

        // Calculate minimum operations
        int min_operations = n - max_freq;
        printf("%d\n", min_operations);
    }

    return 0;
}
