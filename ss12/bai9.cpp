#include <stdio.h>
#include <stdbool.h>

// 1. Nhap các phan tu cua ma tran
void nhapMaTran(int a[100][100], int n, int m) {
    printf("Nhap các phan tu cua ma tran %d x %d:\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Nhap a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

// 2. In ma tran
void inMaTran(int a[100][100], int n, int m) {
    printf("Ma tran %d x %d là:\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%4d ", a[i][j]);
        }
        printf("\n");
    }
}

// 3. In các phan tu o góc cua ma tran
void inCacGoc(int a[100][100], int n, int m) {
    printf("Các phan tu o goc cua ma tran là:\n");
    printf("%d %d\n", a[0][0], a[0][m-1]);
    printf("%d %d\n", a[n-1][0], a[n-1][m-1]);
}

// 4. In các phan tu nam trên duong biên cua ma tran
void inDuongBien(int a[100][100], int n, int m) {
    printf("Các phan tu trên duong biên cua ma tran là:\n");
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

// 5. In các phan tu trên duong chéo chính và chéo phu
void inCheoChinhCheoPhu(int a[100][100], int n, int m) {
    printf("Các phan tu trên chéo chính và cheo phu cua ma tran là:\n");
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

// 6. Kiem tra so nguyên tu
bool laSoNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) 
            return false;
    }
    return true;
}

// 6. In các phan tu là so nguyên tu
void inSoNguyenTo(int a[100][100], int n, int m) {
    printf("Các phan tu là so nguyên to trong ma tran là:\n");
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
    printf("1. Nhap giá tri các phan tu cua mang\n");
    printf("2. In giá tri các phan tu cua mang theo ma tran\n");
    printf("3. In các phan tu o góc cua ma tran\n");
    printf("4. In các phan tu trên duong bien cua ma tran\n");
    printf("5. In các phan tu tren cheo chinh và cheo phu\n");
    printf("6. In các phan tu là so nguyên tu trong ma tran\n");
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
                printf("Thoat chuong trình.\n");
                break;
            default:
                printf("Lua chon không hop le, vui lòng nhap loi!\n");
        }
    } while (luaChon != 7);

    return 0;
}

