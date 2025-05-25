#include <stdio.h>
#include <stdlib.h>

int main() {
    int amount;
    scanf("%d", &amount);

    int points[amount][2];

    for (int i = 0; i < amount; ++i) {
        scanf("%d %d", &points[i][0], &points[i][1]);
    }

    int most = 0;
    for (int i = 0; i < amount; ++i) {
        for (int j = i + 1; j < amount; ++j) {
            int dx = abs(points[i][0] - points[j][0]);
            int dy = abs(points[i][1] - points[j][1]);
            if (dx == dy && dx > most) {
                most = dx;
            }
        }
    }

    printf("%d\n", most);
    return 0;
}

