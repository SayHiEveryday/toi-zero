#include <stdio.h>

int main() {
    int amount;

    scanf("%d", &amount);

    for (int i = 0; i < amount; i++) {
        for (int j = 0; j < i + 1; j++) {
            if (j == 0) {
                printf("0 ");
            } else if (j == i) {
                printf("0 ");
            } else if (i == amount - 1) {
                printf("0 ");
            } else {
                printf("1 ");
            }
        }
        printf("\n");
    }
}
