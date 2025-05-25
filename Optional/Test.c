/*

10
**********
*--------*
*-******-*
*-*----*-*
*-*-**-*-*
*-*-**-*-*
*-*----*-*
*-******-*
*--------*
**********

5
*****
*---*
*-*-*
*---*
*****

1
*

*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int min = i < j ? i : j;
            min = min < n - 1 - i ? min : n - 1 - i;
            min = min < n - 1 - j ? min : n - 1 - j;
            if (min % 2 == 0) {
                printf("*");
            } else {
                printf("-");
            }
        }
        printf("\n");
    }
}

