#include <stdio.h>

// Ham sap xep tang dan mot cot
void sortColumn(int array[][100], int rows, int colIndex) {
    for (int i = 0; i < rows - 1; i++) {
        for (int j = i + 1; j < rows; j++) {
            if (array[i][colIndex] > array[j][colIndex]) {
                int temp = array[i][colIndex];
                array[i][colIndex] = array[j][colIndex];
                array[j][colIndex] = temp;
            }
        }
    }
}
int main() {
    int n, m;
    // Nhap so dong va so cot
    printf("Nhap so dong: ");
    scanf("%d", &n);
    printf("Nhap so cot: ");
    scanf("%d", &m);
    int array[100][100];
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
    // Sap xep tung cot
    for (int j = 0; j < m; j++) {
        sortColumn(array, n, j);
    }

    // Hien thi mang sau khi sap xep
    printf("\nMang sau khi sap xep tang dan theo tung cot:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

