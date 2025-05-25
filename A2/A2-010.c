#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, Q;
    scanf("%d %d", &N, &Q);

    int depth[200000];
    int len = 0;
    int current_depth = 0;

    for (int i = 0; i < N; i++) {
        int D, L;
        scanf("%d %d", &D, &L);
        for (int j = 0; j < L; j++) {
            current_depth += D;
            depth[len++] = current_depth;
        }
    }

    int *max_depth_for_width = (int*)calloc(len + 1, sizeof(int));



}
