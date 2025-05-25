#include <stdio.h>

int main() {
    int Assign1;
    int Assign2;
    int Assign3;

    scanf("%d", &Assign1);
    scanf("%d", &Assign2);
    scanf("%d", &Assign3);

    if ( Assign1 < 10 / 2 ) {
        printf("fail");
        return 0;
    }
    if (Assign2 < 40 / 2) {
        printf("fail");
        return 0;
    }
    if ( Assign3 < 50 / 2 ) {
        printf("fail");
        return 0;
    }
    printf("pass");
    return 0;
}
