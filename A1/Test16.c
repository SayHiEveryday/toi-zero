#include <stdio.h>

int main() {
    char input[9];

    scanf("%s", input);

    if (input[2] == '1' && input[3] == '6') {
        printf("yes");
    } else {
        printf("no");
    }
}
