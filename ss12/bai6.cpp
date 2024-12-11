#include <stdio.h>
#include <stdbool.h>

// H�m kiem tra so hoan hao
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

    // Y�u cau nguoi d�ng nhap 2 so nguy�n to b�n ph�m
    printf("Nhap so nguy�n thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &so2);

    // Kiem tra so ho�n hao voi so thu nhat
    if (laSoHoanHao(so1)) {
        printf("%d l� so ho�n hao.\n", so1);
    } else {
        printf("%d kh�ng phai l� so hoan hao.\n", so1);
    }

    // Kiem tra so ho�n hao voi so thu hai
    if (laSoHoanHao(so2)) {
        printf("%d l� so hoan hao.\n", so2);
    } else {
        printf("%d kh�ng phai l� so hoan hao.\n", so2);
    }

    return 0;
}

