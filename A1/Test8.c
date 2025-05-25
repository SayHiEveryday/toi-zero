#include <stdio.h>
#include <string.h>

int main() {
    char id[100];

    scanf("%s", id);

    if (strlen(id) == 13) {
        printf("yes");
    } else {
        printf("no");
    }
}
