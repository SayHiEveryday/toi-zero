#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    char Matrix[N][M];
    char ResultMatrix[N][M];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf(" %c", &Matrix[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (i == 0) {
                ResultMatrix[i][j] = Matrix[i][j];
            } else if (Matrix[i][j] == '-' && Matrix[i - 1][j] == '*') {
                ResultMatrix[i][j] = '*';
            } else {
                ResultMatrix[i][j] = Matrix[i][j];
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%c ", ResultMatrix[i][j]);
        }
        printf("\n");
    }
}