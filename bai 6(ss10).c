#include <stdio.h>

int main() {
    int array[] = {8, 3, 7, 3, 12, 1, 3, 4};
    int n = sizeof(array) / sizeof(array[0]);
    printf("Mang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    // Nhap so can tim
    int target;
    printf("Nhap mot so can tim: ");
    scanf("%d", &target);
    // Tim kiem tuyen tinh
    int foundIndices[n];
    int foundCount = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] == target) {
            foundIndices[foundCount++] = i; // Luu vi tri vao mang
        }
    }
    // In ket qua tim kiem
    if (foundCount > 0) {
        printf("Phan tu %d duoc tim thay tai cac vi tri: ", target);
        for (int i = 0; i < foundCount; i++) {
            printf("%d ", foundIndices[i]);
        }
        printf("(chi so bat dau tu 0).\n");
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", target);
    }
}

