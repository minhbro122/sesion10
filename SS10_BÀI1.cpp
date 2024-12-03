#include <stdio.h>

int main() {
    int n, i, element;

    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &element);

    for(i = 0; i < n; i++) {
        if(arr[i] == element) {
            printf("vi tri: %d\n", i + 1);
            return 0;
        }
    }

    printf("khong co  \n");
    return 0;
}

