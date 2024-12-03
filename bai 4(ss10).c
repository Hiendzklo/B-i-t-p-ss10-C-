#include <stdio.h>

int main() {
    int array[] = {8, 3, 7, 5, 12, 1, 9, 4};
    int n = sizeof(array) / sizeof(array[0]);
    printf("Mang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    //sap xep chon
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // Gia su phan tu i la nho nhat
        for (int j = i + 1; j < n; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j; // Cap nhat chi so cua phan tu nho nhat
            }
        }
        // Hoan doi phan tu nho nhat voi phan tu tai vi tri i
        int temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
    }
    printf("Mang sau khi sap xep tang dan: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
}

