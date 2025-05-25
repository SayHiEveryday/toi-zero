#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int board[100][100];
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            board[i][j] = 0;
        }
    }

    int bombs;
    scanf("%d", &bombs);

    int br[100];
    int bc[100];

    for (i = 0; i < bombs; i++) {
        scanf("%d %d", &br[i], &bc[i]);
        board[br[i]][bc[i]] = -1;
    }

    for (i = 0; i < bombs; i++) {
        int r = br[i];
        int c = bc[i];


        if (r - 1 >= 0 && c - 1 >= 0 && board[r - 1][c - 1] != -1) {
            board[r - 1][c - 1]++;
        }

        if (r - 1 >= 0 && board[r - 1][c] != -1) {
            board[r - 1][c]++;
        }

        if (r - 1 >= 0 && c + 1 < m && board[r - 1][c + 1] != -1) {
            board[r - 1][c + 1]++;
        }

        if (c - 1 >= 0 && board[r][c - 1] != -1) {
            board[r][c - 1]++;
        }

        if (c + 1 < m && board[r][c + 1] != -1) {
            board[r][c + 1]++;
        }

        if (r + 1 < n && c - 1 >= 0 && board[r + 1][c - 1] != -1) {
            board[r + 1][c - 1]++;
        }

        if (r + 1 < n && board[r + 1][c] != -1) {
            board[r + 1][c]++;
        }

        if (r + 1 < n && c + 1 < m && board[r + 1][c + 1] != -1) {
            board[r + 1][c + 1]++;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (board[i][j] == -1) {
                printf("x");
            } else {
                printf("%d", board[i][j]);
            }
            if (j < m - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
