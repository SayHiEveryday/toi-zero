#include <stdio.h>

int main() {
    int carrot, cabbage, tomato;
    scanf("%d %d %d", &carrot, &cabbage, &tomato);

    printf("%d", carrot * 10 + cabbage * 25 + tomato * 3);
}
