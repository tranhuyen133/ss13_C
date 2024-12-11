#include <stdio.h>

// Hàm tao ma tran và nhap giá tri cho các phan tu
void taoMaTran(int maTran[10][10], int soHang, int soCot) {
    for (int i = 0; i < soHang; i++) {
        for (int j = 0; j < soCot; j++) {
            printf("Nhap phan tu [%d][%d]: ", i, j);
            scanf("%d", &maTran[i][j]);
        }
    }
}

// Hàm in ma tran ra màn hình
void inMaTran(int maTran[10][10], int soHang, int soCot) {
    printf("\nMa tran %d x %d dã nhap là:\n", soHang, soCot);
    for (int i = 0; i < soHang; i++) {
        for (int j = 0; j < soCot; j++) {
            printf("%4d", maTran[i][j]); // in moi phan tu, cách nhau 4 khoang trong
        }
        printf("\n");
    }
}

int main() {
    int maTran[10][10]; // Gioi han ma tran 10x10
    int soHang, soCot;

    // Nhap so hàng và so cot
    printf("Nhap so hàng cua ma tran: ");
    scanf("%d", &soHang);
    printf("Nh?p so cot cua ma tr?n: ");
    scanf("%d", &soCot);

    // Goi hàm de tao ma tran và nhap du lieu
    taoMaTran(maTran, soHang, soCot);

    // Goi hàm de in ma tran ra màn hình
    inMaTran(maTran, soHang, soCot);

    return 0;
}

