#include <stdio.h>
#include <string.h>

int main() {
    char ch1, num1[6];
    char ch2, num2[6];
    scanf("%c %s", &ch1, num1);
    scanf(" %c %s", &ch2, num2);

    if (ch1 == ch2 && strcmp(num1, num2) == 0) {
        printf("1000000");
        return 0;
    }
    if (strcmp(num1, num2) == 0) {
        printf("100000");
        return 0;
    }

    int count = 0;
    for (int i = 4; i >= 0; i--) {
        if (num1[i] == num2[i]) {
            count++;
        }
    }

    if (ch1 == ch2 && count == 2) {
        printf("1000");
    } else if (ch1 == ch2 && count == 3) {
        printf("2000");
    } else if (count == 2) {
        printf("100");
    } else if (count == 3) {
        printf("200");
    } else if (ch1 == ch2) {
        printf("20");
    } else {
        printf("0");
    }

}
