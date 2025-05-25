#include <math.h>
#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    x = (x / 10) * 10;

    for (int i = x; i >= 0; i = i - 10) {
        printf("%d ",i);
    }
}
