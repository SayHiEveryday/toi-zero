#include <stdio.h>

int main() {
    int n;
    int array[350] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int tmp;
        scanf("%d", &tmp);
        array[tmp]++;
    }

    int max = 0;
    for (int i = 1; i <= 300; i++) {
        if (max < array[i]) {
            max = array[i];
        }
    }

    printf("%d", max);

}
