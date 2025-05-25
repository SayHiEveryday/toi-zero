#include <stdio.h>

int main() {
    int nums[3];
    scanf("%d", &nums[0]);
    scanf("%d", &nums[1]);
    scanf("%d", &nums[2]);
    int current = nums[0];

    for (int i = 0; i < 3; i++) {
        if (nums[i] < current) {
            current = nums[i];
        }
    }

    printf("%d", current);
    return 0;
}
