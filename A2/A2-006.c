#include <stdio.h>
#include <stdbool.h>


char grid[30][30 + 1];
int N;

bool canReach(int i, int j) {

    if (i >= N || j >= N) return false;

    if (grid[i][j] == 'X') return false;

    if (i == N - 1 && j == N - 1) return true;

    bool result = canReach(i + 1, j) || canReach(i, j + 1);
    return result;
}

int main() {
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%s", grid[i]);
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (grid[i][j] == '.' && canReach(i, j)) {
                count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}
