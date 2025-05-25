#include <stdio.h>

int main() {
    int lines, cols;
    int rabbitLines, rabbitCols;
    int N;

    scanf("%d %d", &lines, &cols);
    scanf("%d %d", &rabbitLines, &rabbitCols);
    scanf("%d", &N);

    int array[lines][cols];
    int locationX[N], locationY[N];

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &locationX[i], &locationY[i]);
    }

    for (int i = 0; i < N; i++) {
        array[locationX[i]][locationY[i]] = 100;
        array[locationX[i]][locationY[i] - 1] = 60;
        array[locationX[i]][locationY[i] - 1] = 60;


        // place 60%
        for (int j = 1; j < 4; j++) {
            array[locationX[i] + 1][locationY[j - 2]] = 60;
            array[locationX[i] - 1][locationY[j - 2]] = 60;
        }
    }


    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

}

