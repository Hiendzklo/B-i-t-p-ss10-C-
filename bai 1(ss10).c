#include <stdio.h>

int main() {
    int array[] = {5, 8, 12, 3, 7, 15, 1, 10};
    int n = sizeof(array) / sizeof(array[0]);
    int value, found = 0;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &value);
    printf("Phan tu %d xuat hien tai vi tri: ", value);
    for (int i = 0; i < n; i++) {
        if (array[i] == value) {
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found) {
        printf("Khong ton tai trong mang.");
    }
}

