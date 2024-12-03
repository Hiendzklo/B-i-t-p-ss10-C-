#include <stdio.h>

// Hàm s?p x?p tãng d?n m?t m?ng
void sortRow(int row[], int cols) {
    for (int i = 0; i < cols - 1; i++) {
        for (int j = i + 1; j < cols; j++) {
            if (row[i] > row[j]) {
                int temp = row[i];
                row[i] = row[j];
                row[j] = temp;
            }
        }
    }
}

int main() {
    int n, m;

    // Nh?p s? d?ng và s? c?t
    printf("Nhap so dong: ");
    scanf("%d", &n);
    printf("Nhap so cot: ");
    scanf("%d", &m);

    int array[n][m];

    // Nhap gia tri cac phan tu cua mang
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("array[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // Hien thi mang ban dau
    printf("\nMang ban dau:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    // Sap xep tung dong
    for (int i = 0; i < n; i++) {
        sortRow(array[i], m);
    }

    // Hien thi mang sau khi sap xep
    printf("\nMang sau khi sap xep tang dan theo tung dong:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

