#include <stdio.h>

int main() {
    char character;

    scanf("%c", &character);

    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') {
        printf("yes");
    } else {
        printf("no");
    }
}
