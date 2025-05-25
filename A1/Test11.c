#include <stdio.h>
#include <string.h>

int main() {
    char input[6];
    char current;
    int count = 1;
    char result[20] = "";
    char buffer[10];

    scanf("%5s", input);

    for (int i = 0; i < strlen(input); i++) {
        if (i == 0) {
            current = input[i];
            continue;
        }

        if (input[i] == current) {
            count++;
        } else {
            sprintf(buffer, "%d%c", count, current);
            strcat(result, buffer);
            current = input[i];
            count = 1;
        }
    }

    sprintf(buffer, "%d%c", count, current);
    strcat(result, buffer);

    printf("%s\n", result);
    return 0;
}
