#include <stdio.h>

int main() {
    char start;
    int round;

    scanf(" %c %d", &start, &round);

    int startI;

    if (start == 'R') {
        startI = 0;
    } else if (start == 'G') {
        startI = 1;
    } else if (start == 'B') {
        startI = 2;
    }

    for (int i = 0; i < round; i++) {
        const char* color[] = {"Red", "Green", "Blue"};
        printf("%s ", color[(startI + i) % 3]);
    }
}