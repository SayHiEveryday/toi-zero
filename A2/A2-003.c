#include <stdio.h>

int main() {
    int n;
    int arr[n];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        if ((i == 0 && arr[i] > arr[i+1]) ||
            (i == n && arr[i] < arr[i-1]) ||
            (0 < i < n && arr[i] > arr[i-1] && arr[i] > arr[i+1])) {
            count++;
        }
    }
    printf("%d", count);
}