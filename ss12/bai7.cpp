#include <stdio.h>

// H�m tao ma tran v� nhap gi� tri cho c�c phan tu
void taoMaTran(int maTran[10][10], int soHang, int soCot) {
    for (int i = 0; i < soHang; i++) {
        for (int j = 0; j < soCot; j++) {
            printf("Nhap phan tu [%d][%d]: ", i, j);
            scanf("%d", &maTran[i][j]);
        }
    }
}

// H�m in ma tran ra m�n h�nh
void inMaTran(int maTran[10][10], int soHang, int soCot) {
    printf("\nMa tran %d x %d d� nhap l�:\n", soHang, soCot);
    for (int i = 0; i < soHang; i++) {
        for (int j = 0; j < soCot; j++) {
            printf("%4d", maTran[i][j]); // in moi phan tu, c�ch nhau 4 khoang trong
        }
        printf("\n");
    }
}

int main() {
    int maTran[10][10]; // Gioi han ma tran 10x10
    int soHang, soCot;

    // Nhap so h�ng v� so cot
    printf("Nhap so h�ng cua ma tran: ");
    scanf("%d", &soHang);
    printf("Nh?p so cot cua ma tr?n: ");
    scanf("%d", &soCot);

    // Goi h�m de tao ma tran v� nhap du lieu
    taoMaTran(maTran, soHang, soCot);

    // Goi h�m de in ma tran ra m�n h�nh
    inMaTran(maTran, soHang, soCot);

    return 0;
}

