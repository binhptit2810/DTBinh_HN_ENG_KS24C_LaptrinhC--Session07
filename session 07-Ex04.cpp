#include <stdio.h>

int main() {
    int n;
    // yeu cau nguoi dung nhap so phan tu  cua mang
    printf("Nhap so phan tu cua mang : ");
    scanf("%d", &n);
    int arr[n];
    // Nhap tung phan tu cua mang
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // in cac phan tu cua mang ra ngoai man hinh
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

