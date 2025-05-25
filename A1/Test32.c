#include <stdio.h>

int main() {
    int amount;
    scanf("%d",&amount);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < amount - i * 2; j++) {
            printf("*");
        }
        printf("\n");
    }
}
