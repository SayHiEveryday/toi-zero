#include <stdio.h>

int main() {
    int amount;
    scanf("%d", &amount);

    char id1[amount + 1], id2[amount + 1];
    scanf("%s", id1);
    scanf("%s", id2);

    int NotEqualAmount = 0;

    for (int i = 0; i < amount; i++) {
        if ((id1[i] - '0') + (id2[i] - '0') != 9) {
            NotEqualAmount++;
        }
    }

    if (NotEqualAmount == 0) {
        printf("YES");
    } else {
        printf("NO %d", NotEqualAmount);
    }

}