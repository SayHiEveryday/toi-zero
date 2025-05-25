#include <stdio.h>

int main() {
    int num1, num2, total;

    scanf("%d", &num1);
    scanf("%d", &num2);

    total = num1 + num2;

    if (total >= 50) {
        printf("%d\npass", total);
    } else {
        printf("%d\nfail", total);
    }
    return 0;
}
