#include <stdio.h>

int main() {
    int array[] = {8, 3, 7, 5, 12, 1, 9, 4};
    int n = sizeof(array) / sizeof(array[0]);
    printf("Mang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    // Sap xep mang bang sap xep chen
    for (int i = 1; i < n; i++) {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
    printf("Mang sau khi sap xep tang dan: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    // Nhap so can tim
    int target;
    printf("Nhap mot so can tim: ");
    scanf("%d", &target);

    // Tim kiem nhi phan
    int left = 0, right = n - 1, found = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (array[mid] == target) {
            found = mid;
            break;
        } else if (array[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    // In ket qua tim kiem
    if (found != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d (chi so bat dau tu 0).\n", target, found);
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", target);
    }
}

