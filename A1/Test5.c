#include <stdio.h>

int main() {
    char season[13][10] = {
        "error",  // 0
        "winter", // 1
        "winter", // 2
        "winter", // 3
        "spring", // 4
        "spring", // 5
        "spring", // 6
        "summer", // 7
        "summer", // 8
        "summer", // 9
        "fall",   // 10
        "fall",   // 11
        "fall"    // 12
    };

    int month, day;

    scanf("%d", &month);
    scanf("%d", &day);

    if (month % 3 == 0 && day >= 21) {
        printf("%s\n", season[month + 1]);
    } else {
        printf("%s\n", season[month]);
    }

    return 0;
}
