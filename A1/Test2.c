
#include <stdio.h>

int main() {
    int money;
    int ten_baht = 0;
    int five_baht = 0;
    int two_baht = 0;
    int one_baht = 0;

    scanf("%d",&money);
    for (int i = 0; money >= 10; i = i + 10) {
        ten_baht = ten_baht + 1;
        money = money - 10;
    }

    for (int i = 0; money >= 5; i = i + 5) {
        five_baht = five_baht + 1;
        money = money - 5;
    }

    for (int i = 0; money >= 2; i = i + 2) {
        two_baht = two_baht + 1;
        money = money - 2;
    }

    for (int i = 0; money >= 1; i = i + 1) {
        one_baht = one_baht + 1;
        money = money - 1;
    }

    printf("10 = %d\n", ten_baht);
    printf("5 = %d\n", five_baht);
    printf("2 = %d\n", two_baht);
    printf("1 = %d\n", one_baht);


    return 0;
}
