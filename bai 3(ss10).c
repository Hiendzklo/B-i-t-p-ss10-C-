#include <stdio.h>

int main() {
    int array[] = {8, 3, 7, 5, 12, 1, 9, 4};
    int n = sizeof(array) / sizeof(array[0]);
    printf("Mang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    //sap xep chen
    for (int i = 1; i < n; i++) {
        int key = array[i]; // Lay gia tri cua phan tu hien tai
        int j = i - 1;
        // Di chuyen cac phan tu lon hon `key` ve pheia sau
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key; // Chèn `key` vào dung vi tri 
    }
    printf("Mang sau khi sap xep tang dan: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
}

