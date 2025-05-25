#include <stdio.h>

int main() {
    int nums[3];
    scanf("%d", &nums[0]);
    scanf("%d", &nums[1]);
    scanf("%d", &nums[2]);

    int evens = 0, odds = 0;

    for (int i = 0; i < 3; i++) {
        if (nums[i] % 2 == 0) {
            evens++;
        } else {
            odds++;
        }
    }

    printf("even %d\nodd %d", evens, odds);
}