#include <stdio.h>
#include <stdbool.h> // Thu vien cho kieu du lieu bool (true, false)

// Hàm kiem tra so nguyên tu
bool kiemTraSoNguyenTo(int n) {
    if (n < 2) 
        return false; // So nho hon 2 không phai là so nguyên to
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) 
            return false; // Neu n chia het cho i thì n không phai là so nguyên to
    }
    return true; // Neu không tìm duoc uoc so nào thì n là so nguyên to
}

int main() {
    int so1, so2;

    // Nhap 2 so nguyên tu bàn phím
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &so2);

    // Kiem tra so nguyen tu cho tung so
    if (kiemTraSoNguyenTo(so1)) 
        printf("%d là so nguyen t?.\n", so1);
    else 
        printf("%d không phai la so nguyen t?.\n", so1);

    if (kiemTraSoNguyenTo(so2)) 
        printf("%d là so nguyen to.\n", so2);
    else 
        printf("%d không phai là so nguyen t?.\n", so2);

    return 0;
}

