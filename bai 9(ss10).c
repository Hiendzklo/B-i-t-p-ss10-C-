#include <stdio.h>

int main() {
    int row, col;
    // Nhap so dong va so cot
    printf("Nhap so dong: ");
    scanf("%d", &row);
    printf("Nhap so cot: ");
    scanf("%d", &col);
    int array[row][col];
    // Nhap gia tri cac phan tu cua mang
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("array[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    // In mang ban dau
    printf("\nMang ban dau:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    // Sap xep cac phan tu tren duong cheo chinh
    // Ðua cac phan tu tren duong cheo chinh vao mang tam
    int diagonal[row];
    for (int i = 0; i < row; i++) {
        diagonal[i] = array[i][i];
    }
    // Sap xep mang diagonal
    for (int i = 0; i < row - 1; i++) {
        for (int j = i + 1; j < row; j++) {
            if (diagonal[i] > diagonal[j]) {
                int temp = diagonal[i];
                diagonal[i] = diagonal[j];
                diagonal[j] = temp;
            }
        }
    }
    // Gan lai gia tri da sap xep vao duong cheo chinh
    for (int i = 0; i < row; i++) {
        array[i][i] = diagonal[i];
    }
    // In mang sau khi sap xep duong cheo chinh
    printf("\nMang sau khi sap xep duong cheo chinh:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

