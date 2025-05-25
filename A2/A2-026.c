#include <stdio.h>

int main() {
    int amount;
    scanf("%d", &amount);

    char rabbit[amount][50];
    int weight[amount];

    for (int i = 0; i < amount; i++) {
        scanf("%s %d", rabbit[i], &weight[i]);
    }

    int current = 0;
    int overweight = 0;
    for (int i = 0; i < amount; i++) {
        if (weight[i] > 15) {
            overweight++;
        }

        if (weight[i] > weight[current]) {
            current = i;
        }
    }

    printf("%d\n", overweight);
    printf("%s %d", rabbit[current], weight[current]);
    
}