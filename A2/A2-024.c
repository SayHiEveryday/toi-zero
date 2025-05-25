#include <stdio.h>

int main() {
    int distance, AmountCheckpoint;
    scanf("%d %d", &distance, &AmountCheckpoint);

    int rabbit, monkey, frog;
    scanf("%d %d %d", &rabbit, &monkey, &frog);

    int checkpoints[500], points[500];
    for (int i = 0; i < AmountCheckpoint; i++) {
        scanf("%d %d", &checkpoints[i], &points[i]);
    }

    int rabbitPoint = 0, monkeyPoint = 0, frogPoint = 0;
    for (int i = 0; i < AmountCheckpoint; i++) {
        if (checkpoints[i] <= distance) {
            if (checkpoints[i] % rabbit == 0)
                rabbitPoint += points[i];
            if (checkpoints[i] % monkey == 0)
                monkeyPoint += points[i];
            if (checkpoints[i] % frog == 0)
                frogPoint += points[i];
        }
    }

    int maxPoint = rabbitPoint;
    if (monkeyPoint > maxPoint) maxPoint = monkeyPoint;
    if (frogPoint > maxPoint) maxPoint = frogPoint;

    if (rabbitPoint == maxPoint) {
        printf("Rabbit %d\n", rabbitPoint);
    }
    if (monkeyPoint == maxPoint) {
        printf("Monkey %d\n", monkeyPoint);
    }
    if (frogPoint == maxPoint) {
        printf("Frog %d\n", frogPoint);
    }

}