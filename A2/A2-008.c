#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int price[n], eff[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &price[i], &eff[i]);
    }

    int total = 0;
    int max_eff = eff[n - 1];

    for (int i = n - 1; i >= 0; i--) {
        if (eff[i] > max_eff) {
            max_eff = eff[i];
        }
        if (eff[i] < max_eff) {
            total++;
        }
    }
    printf("%d\n", total);
}