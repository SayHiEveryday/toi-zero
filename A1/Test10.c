#include <stdio.h>

int main() {
    int age;
    char type;

    scanf("%d", &age);
    scanf(" %c", &type);

    if (age < 18 || type == 's' || type == 'S') {
        printf("20");
    } else {
        printf("50");
    }
}
