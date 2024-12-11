#include <stdio.h>

// Hàm tìm uoc chung lon nhat (UCLN) cua 2 so nguyên a và b
int timUCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b; // Phan du cua a chia cho b
        a = temp;
    }
    return a;
}

int main() {
    int so1, so2;

    // Nhap 2 so nguyên
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &so2);

    // Goi hàm timUCLN và in ket qua
    int ucln = timUCLN(so1, so2);
    printf("Uoc chung lon nhat (UCLN) cua %d và %d là: %d\n", so1, so2, ucln);

    return 0;
}

