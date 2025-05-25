#include <stdio.h>

int main() {
    int num;
    char method;
    scanf("%d", &num);
    scanf(" %c", &method);

    // https://www.geeksforgeeks.org/c-reverse-number/
    int rev_num = 0;
    int og_num = num;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }

    if (method == '+') {
        printf("%d + %d = %d", og_num, rev_num, rev_num + og_num);
    } else if (method == '*') {
        printf("%d * %d = %d", og_num, rev_num, rev_num * og_num);
    }
}
