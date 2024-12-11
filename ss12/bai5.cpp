#include <stdio.h>
#include <stdbool.h> // Thu vien cho kieu du lieu bool (true, false)

// H�m kiem tra so nguy�n tu
bool kiemTraSoNguyenTo(int n) {
    if (n < 2) 
        return false; // So nho hon 2 kh�ng phai l� so nguy�n to
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) 
            return false; // Neu n chia het cho i th� n kh�ng phai l� so nguy�n to
    }
    return true; // Neu kh�ng t�m duoc uoc so n�o th� n l� so nguy�n to
}

int main() {
    int so1, so2;

    // Nhap 2 so nguy�n tu b�n ph�m
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &so2);

    // Kiem tra so nguyen tu cho tung so
    if (kiemTraSoNguyenTo(so1)) 
        printf("%d l� so nguyen t?.\n", so1);
    else 
        printf("%d kh�ng phai la so nguyen t?.\n", so1);

    if (kiemTraSoNguyenTo(so2)) 
        printf("%d l� so nguyen to.\n", so2);
    else 
        printf("%d kh�ng phai l� so nguyen t?.\n", so2);

    return 0;
}

