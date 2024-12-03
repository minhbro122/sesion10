#include <stdio.h>

int main() {
    int n, i, j, temp;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int mang[n];
    printf("Nhap cac phan tu cua mang:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &mang[i]);
    }

    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(mang[j] > mang[j+1]) {
                temp = mang[j];
                mang[j] = mang[j+1];
                mang[j+1] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep theo thu tu tang dan:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }

    return 0;
}

