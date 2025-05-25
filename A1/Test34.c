#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int current = nums[0];

    for (int i = 0; i < n; i++) {
        if (nums[i] < current) {
            current = nums[i];
        }
    }

    printf("%d", current);
    return 0;
}
