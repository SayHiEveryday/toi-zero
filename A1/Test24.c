#include <stdio.h>

int main() {
    int year, size;

    scanf("%d", &year);
    scanf("%d", &size);

    if (size >= 2000) {
        if (year > 2000) {
            printf("1500");
        } else if (year > 1990 && year < 2000) {
            printf("1700");
        } else {
            printf("2000");
        }
    } else if (size > 1500 && size < 2000) {
        if (year > 2000) {
            printf("1200");
        } else if (year > 1990 && year < 2000) {
            printf("1300");
        } else {
            printf("1400");
        }
    } else if (size <= 1500) {
        if (year > 2000) {
            printf("1000");
        } else if (year > 1990 && year < 2000) {
            printf("1100");
        } else {
            printf("1250");
        }
    }
}
