#include <stdio.h>
#include <stdbool.h>

// Hàm kiem tra so hoan hao
bool laSoHoanHao(int n) {
    if (n <= 1) 
        return false;

    int tongUoc = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            tongUoc += i;
        }
    }

    return tongUoc == n;
}

int main() {
    int so1, so2;

    // Yêu cau nguoi dùng nhap 2 so nguyên to bàn phím
    printf("Nhap so nguyên thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &so2);

    // Kiem tra so hoàn hao voi so thu nhat
    if (laSoHoanHao(so1)) {
        printf("%d là so hoàn hao.\n", so1);
    } else {
        printf("%d không phai là so hoan hao.\n", so1);
    }

    // Kiem tra so hoàn hao voi so thu hai
    if (laSoHoanHao(so2)) {
        printf("%d là so hoan hao.\n", so2);
    } else {
        printf("%d không phai là so hoan hao.\n", so2);
    }

    return 0;
}

