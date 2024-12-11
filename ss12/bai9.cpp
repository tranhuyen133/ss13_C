#include <stdio.h>
#include <stdbool.h>

// 1. Nhap c�c phan tu cua ma tran
void nhapMaTran(int a[100][100], int n, int m) {
    printf("Nhap c�c phan tu cua ma tran %d x %d:\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Nhap a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

// 2. In ma tran
void inMaTran(int a[100][100], int n, int m) {
    printf("Ma tran %d x %d l�:\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%4d ", a[i][j]);
        }
        printf("\n");
    }
}

// 3. In c�c phan tu o g�c cua ma tran
void inCacGoc(int a[100][100], int n, int m) {
    printf("C�c phan tu o goc cua ma tran l�:\n");
    printf("%d %d\n", a[0][0], a[0][m-1]);
    printf("%d %d\n", a[n-1][0], a[n-1][m-1]);
}

// 4. In c�c phan tu nam tr�n duong bi�n cua ma tran
void inDuongBien(int a[100][100], int n, int m) {
    printf("C�c phan tu tr�n duong bi�n cua ma tran l�:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || i == n-1 || j == 0 || j == m-1) {
                printf("%4d ", a[i][j]);
            } else {
                printf("   0 ");
            }
        }
        printf("\n");
    }
}

// 5. In c�c phan tu tr�n duong ch�o ch�nh v� ch�o phu
void inCheoChinhCheoPhu(int a[100][100], int n, int m) {
    printf("C�c phan tu tr�n ch�o ch�nh v� cheo phu cua ma tran l�:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j || i + j == m - 1) {
                printf("%4d ", a[i][j]);
            } else {
                printf("   0 ");
            }
        }
        printf("\n");
    }
}

// 6. Kiem tra so nguy�n tu
bool laSoNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) 
            return false;
    }
    return true;
}

// 6. In c�c phan tu l� so nguy�n tu
void inSoNguyenTo(int a[100][100], int n, int m) {
    printf("C�c phan tu l� so nguy�n to trong ma tran l�:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (laSoNguyenTo(a[i][j])) {
                printf("%4d ", a[i][j]);
            } else {
                printf("   0 ");
            }
        }
        printf("\n");
    }
}

// 7. Hien thi menu
void hienThiMenu() {
    printf("\nMENU:\n");
    printf("1. Nhap gi� tri c�c phan tu cua mang\n");
    printf("2. In gi� tri c�c phan tu cua mang theo ma tran\n");
    printf("3. In c�c phan tu o g�c cua ma tran\n");
    printf("4. In c�c phan tu tr�n duong bien cua ma tran\n");
    printf("5. In c�c phan tu tren cheo chinh v� cheo phu\n");
    printf("6. In c�c phan tu l� so nguy�n tu trong ma tran\n");
    printf("7. Thoat\n");
}

int main() {
    int a[100][100]; // Mang 2 chieu kich thuoc 100x100
    int n, m, luaChon;

    printf("Nhap so hang n: ");
    scanf("%d", &n);
    printf("Nhap so cot m: ");
    scanf("%d", &m);

    do {
        hienThiMenu();
        printf("Chon chuc nang (1-7): ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                nhapMaTran(a, n, m);
                break;
            case 2:
                inMaTran(a, n, m);
                break;
            case 3:
                inCacGoc(a, n, m);
                break;
            case 4:
                inDuongBien(a, n, m);
                break;
            case 5:
                inCheoChinhCheoPhu(a, n, m);
                break;
            case 6:
                inSoNguyenTo(a, n, m);
                break;
            case 7:
                printf("Thoat chuong tr�nh.\n");
                break;
            default:
                printf("Lua chon kh�ng hop le, vui l�ng nhap loi!\n");
        }
    } while (luaChon != 7);

    return 0;
}

