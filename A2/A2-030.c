#include <stdio.h>
int main() {
    int nums[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &nums[i][j]);
        }
    }

    int horizontal = -1;

    for (int i = 0; i < 5; i++) {
        int total = 0;
        for (int j = 0; j < 5; j++) {
            total += nums[i][j];
        }

        if (total % 2 != 0) {
            horizontal = i;
            break;
        }
    }
    int vertical = -1;
    for (int j = 0; j < 5; j++) {
        int total = 0;
        for (int i = 0; i < 5; i++) {
            total += nums[i][j];
        }

        if (total % 2 != 0) {
            vertical = j;
            break;
        }
    }
    printf("%d %d", horizontal, vertical);
}